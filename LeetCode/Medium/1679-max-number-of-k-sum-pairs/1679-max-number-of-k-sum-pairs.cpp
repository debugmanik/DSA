class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        long long count=0;
        while(i<j){
            long long sum=nums[i]+nums[j];
            if(sum==k){
                count++;
               i++;
               j--;
            }
            else if(sum<k){
                i++;
            }
            else 
            j--;
        }
        return count;
        
    }
};