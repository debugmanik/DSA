class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int aand=nums[i];
            int mini=nums[i];
            for(int j=i;j<n;j++){
                aand &=nums[j];
                mini=min(mini,nums[j]);
                if(aand==mini)
                count++;
            }
        }
            return count;
    }
};