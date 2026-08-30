class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
       int minidx=min_element(nums.begin(),nums.end())-nums.begin(); 
        int maxidx=max_element(nums.begin(),nums.end())-nums.begin(); 
        int left=min(minidx,maxidx);
                int right=max(minidx,maxidx);
                return min({left+1+n-right,right+1,n-left});
    }
};