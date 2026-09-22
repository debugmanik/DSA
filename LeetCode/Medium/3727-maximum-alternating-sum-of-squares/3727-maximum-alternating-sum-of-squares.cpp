class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for (int& x : nums) 
        x=abs(x);
        sort(nums.begin(),nums.end());
        long long ans=0;
        for (int i=0;i<nums.size();i++) {
            long long cur=(long long)nums[i]*nums[i];
            if(i<nums.size()/2) 
            ans-=cur;
            else 
            ans+=cur;
        }
        return ans;
    }
};