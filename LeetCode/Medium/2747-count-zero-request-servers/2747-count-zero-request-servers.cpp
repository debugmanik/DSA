class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
       sort(logs.begin(), logs.end(),[](auto &a, auto &b) {
    return a[1]<b[1];
});
vector<pair<int, int>>queriesidx;
for (int i=0;i<queries.size();i++) {
    queriesidx.push_back({queries[i], i});
}
sort(queriesidx.begin(),queriesidx.end());
vector<int>result(queries.size(),0);
int m=logs.size();
unordered_map<int, int> mp;
int i=0;
int j=0;
for(auto [time,idx]:queriesidx) {
    int start=time-x;
    int end=time;
  while(j<m && logs[j][1]<=end) {
    mp[logs[j][0]]++;
    j++;
}
while(i<m && logs[i][1]<start) {
    mp[logs[i][0]]--;
    if (mp[logs[i][0]]==0) {
        mp.erase(logs[i][0]);
    }
    i++;
}
result[idx]=n-mp.size();
}
return result;
  
  }
};


