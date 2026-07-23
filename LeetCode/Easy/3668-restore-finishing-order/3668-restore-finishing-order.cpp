class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> st;
        for (int x : friends)
            st.insert(x);
        vector<int> ans;
        for (int x : order) {
            if (st.count(x))
                ans.push_back(x);
        }
        return ans;
    }
};