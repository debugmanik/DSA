class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>mpp ;
        for ( auto it:nums) 
             mpp[it]++;
        vector<int>ans;
        for ( auto it:nums ) {
            if ( (mpp[it]==1) && (mpp.find(it-1)==mpp.end()) && (mpp.find(it+1)==mpp.end() ) )
            ans.push_back(it);
        }
        return ans ;
        
    }
};