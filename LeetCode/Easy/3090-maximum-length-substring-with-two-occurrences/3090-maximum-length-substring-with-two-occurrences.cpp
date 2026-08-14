class Solution {
public:
    int maximumLengthSubstring(string s) {
        int j=0;
        int len=0;
        unordered_map<char,int>fq;
        for(int i=0;i<s.size();i++){
fq[s[i]]++;
while(fq[s[i]]>2){
    fq[s[j]]--;
         j++;
}
len=max(len,i-j+1);
        }
        return len;
    }
};