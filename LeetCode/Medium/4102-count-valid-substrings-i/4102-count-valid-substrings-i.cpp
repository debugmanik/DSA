class Solution {
public:
    long long countValidSubstrings(string s) {
        int n=s.length();
        int l=0;
        long ans=0;
        for(int i=0;i<n;i++){
            if(i>=2 && s[i-2]=='a' && s[i-1]=='b' && s[i]=='c'){
                l=i-1;
            }
            ans+=i-l+1;
        }
        return ans;
    }
};