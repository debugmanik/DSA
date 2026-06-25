class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        long long ans=0;
        long long pref=0;
     unordered_map<long long,int>count;
        count[0]=1;
        for(int num:nums){
            if(num==target)
                pref+=1;
            else
                pref-=1;
            for(auto &p :count)
                if(p.first<pref)
                    ans+=p.second;
            count[pref]++;
        }
        return ans;
    }
};