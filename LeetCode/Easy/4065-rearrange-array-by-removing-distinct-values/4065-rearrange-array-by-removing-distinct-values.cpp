class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it: nums) 
        mpp[it]++;
        vector<int> ans;
        while(ans.size()<nums.size()){
            for(auto it:mpp){
                if(it.second>0){
                    ans.push_back(it.first);
                    mpp[it.first]--;
                }
            }
        }
        return ans;
    }
};