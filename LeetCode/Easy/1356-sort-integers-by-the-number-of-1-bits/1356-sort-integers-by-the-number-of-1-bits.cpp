class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        vector<int> cnt(n, 0);
        for (int i = 0; i < n; i++) {
            int x = arr[i];
            while (x) {
                cnt[i] += (x & 1);
                x >>= 1;
            }
        }
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({cnt[i], arr[i]});
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            arr[i] = v[i].second;
        }
        return arr;
    }
};