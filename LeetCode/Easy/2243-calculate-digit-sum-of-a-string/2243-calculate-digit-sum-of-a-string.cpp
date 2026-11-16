
class Solution {
public:
    string digitSum(string s, int k) {
        while (s.size() > k) {
            string next = "";
            int sum = 0;
            for (int i = 0; i < s.size(); i++) {
                sum += s[i] - '0';
                if ((i + 1) % k == 0 || i == s.size() - 1) {
                    next += to_string(sum);
                    sum = 0;
                }
            }
            s = next;
        }
        return s;
    }
};
