class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        for (int len = k; len <= n; len++) {
            string ans = "";
            for (int i = 0; i <= n - len; i++) {
                string temp = s.substr(i, len);
                int ones = 0;
                for (char& ch : temp) {
                    if (ch == '1')
                        ones++;
                }
                if (ones == k) {
                    if (ans == "" || temp < ans)
                        ans = temp;
                }
            }
            if (ans != "")
                return ans;
        }

        return "";
    }
};