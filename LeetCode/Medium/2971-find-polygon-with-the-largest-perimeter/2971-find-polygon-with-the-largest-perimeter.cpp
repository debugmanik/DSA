class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        typedef long long ll;
        ll sum = 0 ;
        ll peri = -1 ;
        int n = nums.size();
        for( int i = 0 ; i < n-1 ; i++ ){
            sum += nums[i];
            if( sum > nums[i+1] )
             peri = max(peri,sum+nums[i+1]);
        }
        return peri;
    }
};