class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end());
        int d1=s[s.size()-1]-'0';
        int d2=s[s.size()-2]-'0';
        return d1 * d2;
    }
};