class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for (string s : patterns) {
            int len = s.size();
            for (int i=0;i+len<= word.size();i++) {
                if (word.substr(i, len) == s) {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};