class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        int n=s1.size();
        vector<vector<string>>result;
        string curr_s1="";
        string curr_s2="";
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                curr_s1+=s1[i];
                curr_s2+=s2[i];
            }
            else {
                if(!curr_s1.empty()){
                    result.push_back({curr_s1,curr_s2});
                    curr_s1="";
                    curr_s2="";
                }
            }
        }
         if(!curr_s1.empty()){
                    result.push_back({curr_s1,curr_s2});}
        
        return result;
    }
};