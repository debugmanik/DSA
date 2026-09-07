class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        long long n=nums.size();
        long long good=0;
        for(int i=0;i<nums.size();i++){
            int a=nums[i]-i;
            good+=mp[a];
            mp[a]++;
        }
            return (n*(n-1))/2-good;
    }
};