class Solution {
public:
    string stringHash(string s, int k) {
        int n=s.size();
        string ans="";
    for(int i=0;i<n;i+=k){
        int sum=0;
        string part=s.substr(i,k);
         for (int j=0;j<part.size();j++){
          char ch=part[j];
          int val=ch-'a';
          sum+=val;
         }
          sum%=26;
            ans+=char(sum+'a');
        }
        return ans;

    }
};