class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
        int n=nums.size();
        int ops=0;
        for(int i=0; i<n;i++) {
            for(int j=0; j<n-(i+1);j++) {
                if(nums[j]>nums[j+1]){
                    if(locked[j]==1) {
                        ops++; 
                        locked[j]=0;
                        k--;
                        if(k<0) 
                        return -1;
                    }
                    if(locked[j+1]==1) {
                        ops++; 
                        locked[j+1] = 0;
                        k--;
                        if(k < 0) 
                        return -1;
                    }
                    swap(nums[j], nums[j+1]); ops++;
                }
            }
        }
        return ops;
    }
};