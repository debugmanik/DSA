class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ans=0;
        for(auto it:mp){
            int count=it.second;
            while(count>=3){
                count-=2;
            }
            ans+=count;
        }
        return ans;
    }
};