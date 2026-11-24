class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans=0;
        for (int i=0;i<nums.size();i++) {
            long long prodval=nums[i];
            long long gcdval=nums[i];
            long long lcmval=nums[i];
            for (int j=i+1;j<nums.size();j++) {
                prodval=prodval*nums[j];
                gcdval=gcd(gcdval,nums[j]);
                lcmval = lcm(lcmval,nums[j]);
                if (prodval>gcdval*lcmval) {
                    break;
                }
                if (prodval==gcdval*lcmval) {
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};