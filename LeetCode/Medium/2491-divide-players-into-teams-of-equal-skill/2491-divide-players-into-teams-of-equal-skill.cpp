class Solution {
public:
    long long dividePlayers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j= nums.size()-1;
        long long target=nums[i]+nums[j];
        long long ans=0;
        while(i<j){
          if(nums[i]+nums[j]!=target){
            return -1;
          }
          ans+=nums[i]*nums[j];
i++;
            j--;
        }
return ans;
    }
};