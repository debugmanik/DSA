class Solution {
public:
    long long maxScore(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        for(int remove=-1;remove<n;remove++){
            long long g=0,l=1;
            for(int i=0;i<n;i++){
                if( i==remove)
                 continue;
                g=gcd(g,nums[i]);
                l=lcm(l,nums[i]);
            }
            ans=max(ans,1LL*g*l);
        }
        return ans;
    }
};