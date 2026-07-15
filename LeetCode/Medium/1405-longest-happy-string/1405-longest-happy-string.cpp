class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string ans;
        while (true) {
            vector<pair<int, char>> v = {
                {a, 'a'},
                {b, 'b'},
                {c, 'c'}
            };
            sort(v.rbegin(), v.rend());
            bool added = false;
            for (int i = 0; i < 3; i++) {
                int cnt = v[i].first;
                char ch = v[i].second;
                if (cnt == 0)
                    continue;
                int n = ans.size();
                if (n >= 2 && ans[n - 1] == ch && ans[n - 2] == ch)
                    continue;
                ans += ch;
                if (ch == 'a')
                    a--;
                else if (ch == 'b')
                    b--;
                else
                    c--;
                added = true;
                break;
            }
            if (!added)
                break;
        }
        return ans;
    }
};