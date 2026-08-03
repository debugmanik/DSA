class Solution {
public:
    int countKeyChanges(string s) {
 transform(s.begin(), s.end(), s.begin(), ::tolower);
        int n=s.size();
        int count=0;
        for(int i=1;i<n;i++){
if(s[i-1]!=s[i]){
    count++;
}
        }
        return count;
            }
};