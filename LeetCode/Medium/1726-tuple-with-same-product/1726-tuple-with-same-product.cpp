class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size();
        unordered_map<long long, int>mp;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                long long product=1LL*nums[i]*nums[j];
                mp[product]++;
            }
        }
        int ans=0;
        for(auto it:mp) {
            int count=it.second;
            if(count>1){
                ans+=count*(count-1)*4;
            }
        }
        return ans;
    }
};