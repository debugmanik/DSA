class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
          int n=nums.size();
        unordered_map<int,vector<int>>mpp;
        int cnt=0;
        for (int i=0;i<n;i++)
         mpp[nums[i]].push_back(i);
        for ( auto& it:mpp){
            vector<int>&pos=it.second ;
            if (pos.size()<3) 
            continue ;
             int diff=pos[1]-pos[0];
            bool special=true;
            for (int i=2;i<pos.size();i++) {
                if (pos[i]-pos[i-1]!=diff) {
                    special = false;
                    break;
                }
            }
       if (special)
                cnt++;
        }
        return cnt ;
        
    }
};