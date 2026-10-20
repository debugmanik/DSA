
class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int ans=0,cnt=1,i=0,j=1;
        while (j<word.size()){
            if (word[j]<word[j-1]){
                cnt=1;
                i=j;
            } 
            else if (word[j]>word[j - 1]){
                cnt++;
            }
            if (word[j]=='u' && cnt==5){
                ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
};
