class Solution {
public:
    int maxNumberOfBalloons(string text) {
           unordered_map<char, int> mp;
        for (char ch : text) {
            mp[ch]++;
        }
        int count = 0;
        while (mp['b'] > 0 && mp['a'] > 0 &&
               mp['l'] >= 2 && mp['o'] >= 2 &&
               mp['n'] > 0) {
            mp['b']--;
            mp['a']--;
            mp['l'] -= 2;
            mp['o'] -= 2;
            mp['n']--;
            count++;
        }
        return count;
    }
};