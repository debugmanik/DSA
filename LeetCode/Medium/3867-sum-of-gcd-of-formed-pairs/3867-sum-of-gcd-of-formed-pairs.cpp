class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n);
        int mx = nums[0];
        v[0] = nums[0];
        for(int i = 1; i < n; i++){
          mx=max(nums[i],mx);
        v[i]=gcd(nums[i],mx);
        }
        sort(v.begin(),v.end());
        long long sum = 0;
         int i=0, j=n-1;
        while (i<j) {
            sum+=gcd(v[i],v[j]);
            i++;
            j--;
        }
return sum;
    }
};