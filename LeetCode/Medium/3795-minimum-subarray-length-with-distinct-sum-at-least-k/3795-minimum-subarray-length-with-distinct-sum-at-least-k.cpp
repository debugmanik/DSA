class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        unordered_map<int, int> mp;
        long long sum = 0;
        int ans=INT_MAX;
        while (j<n) {
            if (mp[nums[j]]==0) {
                sum+=nums[j];
            }
            mp[nums[j]]++;
            while (sum>=k) {
                ans=min(ans,j-i+1);
                mp[nums[i]]--;
                if (mp[nums[i]]==0) {
                    sum-=nums[i];
                }
                i++;
            }
            j++;
        }
        return ans==INT_MAX?-1:ans;
    }
};