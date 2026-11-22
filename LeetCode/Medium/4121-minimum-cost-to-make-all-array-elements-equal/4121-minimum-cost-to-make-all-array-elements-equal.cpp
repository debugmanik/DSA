class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n=nums.size();
        long long ans=LLONG_MAX;
          int i=0;
        while(i<n){
            int j=i;
            while(j<n && nums[j]==nums[i]){
                j++;
            }
            if((i==0 && j==n) || (i<=n-2 && j-1>=1)){
            long long len=j-i;
            long long cost=(n-len)*(long long)nums[i];
            ans=min(ans,cost);
            }
            i=j;
        }
            return ans;
    }
};