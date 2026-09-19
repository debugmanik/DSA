class Solution {
public:
    bool isvowel(char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    int maxVowels(string s, int k) {
        int n=s.length();
        int i=0,j=0;
        int maxi=0;
        int count=0;
        while (j<n) {
            if (isvowel(s[j]))
                count++;
            if (j-i+1==k) {
                maxi=max(maxi,count);
                if(isvowel(s[i]))
                    count--;
                i++;
            }
            j++;
        }
        return maxi;
    }
};