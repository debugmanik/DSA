class Solution {
public:
    int digitFrequencyScore(int n) {
        string s=to_string(n);
        unordered_map<int,int>freq;
        int total=0;
        for(int i=0;i<s.size();i++){
            int digit=s[i]-'0';
            freq[digit]++;
        }
for(auto it:freq){
        total += it.first*it.second;   
}
return total;
    }
};