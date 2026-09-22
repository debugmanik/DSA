class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        map<string,int>freq;
        for(auto day:responses){
            set<string>st(day.begin(),day.end());
            for(string x:st){
                freq[x]++;
            }
        }
        string ans= "";
        int maxi=0;
        for(auto x:freq){
            if(x.second>maxi){
                maxi=x.second;
                ans=x.first;
            }
        }
  return ans;  
  }
};