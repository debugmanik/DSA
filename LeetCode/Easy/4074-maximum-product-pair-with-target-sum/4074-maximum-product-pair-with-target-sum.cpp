class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int x = -1, y = -1;
        int n = nums.size();
        int maxi = -1e9;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(nums[i] + nums[j] == target && nums[i] > nums[j] && nums[i] * nums[j] > maxi){
                    x = i;
                    y = j;
                    maxi = nums[i] * nums[j];
                }  
            }
        }
        return {x,y};

    }
};