class Solution {
public:
vector<int> findnse(vector<int>& heights) {
        int n = heights.size();
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for (int i = n-1; i>=0;i--) {
            int curr=heights[i];
            while (s.top()!=-1 && heights[s.top()]>=curr) {
                s.pop();
            }
            if (s.top()==-1)
                ans[i]=n;
            else
                ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int> findpse(vector<int>& heights) {
        int n = heights.size();
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for (int i=0; i<n; i++) {
            int curr=heights[i];
            while (s.top()!=-1 && heights[s.top()]>=curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> nse = findnse(heights);
        vector<int> pse = findpse(heights);
        int ans=0;
        for(int i=0;i<heights.size();i++){
       int width=nse[i]-pse[i]-1;
       int area=heights[i]*width;
        ans=max(ans,area);

        }
        return ans;
    }
};