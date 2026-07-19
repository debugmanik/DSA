class Solution {
public:
    string smallestSubsequence(string s) {
          int n = s.size();
        vector<int> last(26);
        for(int i = 0; i < n; i++) {
            last[s[i] - 'a'] = i;
        }
        vector<bool> used(26, false);
        string res = "";
        for(int i = 0; i < n; i++) {
            char ch = s[i];
            if(used[ch - 'a']) continue;
            while(!res.empty() && res.back() > ch && last[res.back() - 'a'] > i) {
                used[res.back() - 'a'] = false;
                res.pop_back();
            }
            res.push_back(ch);
            used[ch - 'a'] = true;
        }
        return res;
    }
    
};
