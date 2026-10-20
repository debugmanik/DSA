class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i=0,j=0;
        long sum=0;
     while(j<nums.size()){
            long target=nums[j];
            sum+=target;
            if ((j-i+1)*target-sum > k) {
                sum-=nums[i];
                i++;
            }
           j++; 
        }
        return nums.size() - i;
    }
};