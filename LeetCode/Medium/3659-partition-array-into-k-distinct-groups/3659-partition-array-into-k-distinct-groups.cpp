class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        if(n%k!=0)
        return false;
            int groups=n/k;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
      for(auto it:mp){
        if(it.second>groups)
        return false;
      }
      return true;
        
    }
};