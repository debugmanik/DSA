class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i <= n - k; i++) {
            unordered_map<int, int> temp;
            for (int j = i; j < i + k; j++)
                temp[nums[j]]++;
            for (auto x : temp)
                mp[x.first]++;
        }
        int ans = -1;
        for (auto x : mp) {
            if (x.second == 1)
                ans = max(ans, x.first);
        }
        return ans;
    }
};