class Solution {
public:
    int maxDistinct(string s) {
        set<char>distinct(s.begin(), s.end());
        return distinct.size();
    }
};