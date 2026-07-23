class Solution {
public:
    string reversePrefix(string s, int k) {
        if(k==1)
        return s;
            string sub=s.substr(0,k);
            reverse(sub.begin(),sub.end());
            return sub + s.substr(k);
    }
};