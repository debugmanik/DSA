class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
      sort(in.begin(), in.end(), [](auto& a, auto& b) {
        return a[0] < b[0] || (a[0] == b[0] && a[1] > b[1]);
    });
    int cnt = 0, last = 0;
    for (auto& v : in) {
        if (v[1] > last) {
            cnt++;
            last = v[1];
        }
    }
    return cnt;
    }
};