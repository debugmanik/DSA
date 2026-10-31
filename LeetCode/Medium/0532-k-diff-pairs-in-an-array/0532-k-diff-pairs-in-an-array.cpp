class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int res=0;
        for (int l=0,r=0;l<n;l++) {
            if (l>0 && nums[l]==nums[l-1])
             continue;
            r=max(r,l+1);
            while (r<n && nums[r]-nums[l]<k)
             r++;
            if(r<n && nums[r]-nums[l]==k) 
            res++;
        }
        return res;
    }
};