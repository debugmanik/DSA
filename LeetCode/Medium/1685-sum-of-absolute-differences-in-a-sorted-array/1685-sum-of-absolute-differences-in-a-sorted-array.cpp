class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        int left=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            int right=sum-left-nums[i];
            int lc=i;
            int rc=n-i-1;
            int l=lc*nums[i]-left;
            int r=right-rc*nums[i];
            ans.push_back(l+r);
            left+=nums[i];
        }
        return ans;
    }
};