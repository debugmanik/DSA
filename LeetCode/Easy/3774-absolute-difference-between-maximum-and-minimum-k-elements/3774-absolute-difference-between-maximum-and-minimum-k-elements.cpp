class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int large=0;
        int small=0;
        int n=nums.size();
        for(int i=n-k;i<n;i++) {
            large+=nums[i];
        }
         for(int i=0;i<k;i++){
            small+=nums[i];
        }
        return abs(large-small);
    }
};