class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
           vector<int> ans;
        for (int x : nums1)
            ans.push_back(x);
        for (int x : nums2)
            ans.push_back(x);
        sort(ans.begin(), ans.end());
        int n = ans.size();
        int mid = n / 2;
        if (n % 2 == 1) {
            return ans[mid];
        } else {
            return (ans[mid - 1] + ans[mid]) / 2.0;
        }
    }
};