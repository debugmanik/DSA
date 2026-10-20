class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       int count=0;
       int n=nums.size();
       int i=0,j=0;
       int maxi=1;
              if(k<=1)
               return 0;
       while(j<n){
  maxi*=nums[j];
  while(maxi>=k){
    maxi/=nums[i];
    i++;
  }
  count+=j-i+1;
  j++;
       } 
       return count;
    }
};