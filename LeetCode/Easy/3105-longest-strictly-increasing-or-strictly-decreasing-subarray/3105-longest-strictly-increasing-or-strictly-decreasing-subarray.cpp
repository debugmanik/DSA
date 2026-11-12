class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxincreasing=1,maxdecreasing=1;
        int increasing=1, decreasing=1;
        for (int i=1;i<nums.size();i++){
            if (nums[i]>nums[i-1]){
                increasing++;
                decreasing = 1;
            }
            else if(nums[i]<nums[i-1]){
                decreasing++;
                increasing=1;
            }
            else {
                increasing=1;
                decreasing=1;
            }

            maxincreasing=max(maxincreasing, increasing);
            maxdecreasing=max(maxdecreasing, decreasing);
        }

        return max(maxincreasing,maxdecreasing);
    }
};