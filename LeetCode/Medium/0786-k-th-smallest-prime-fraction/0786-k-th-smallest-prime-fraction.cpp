class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
  vector<pair<double, pair<int, int>>> fractions;
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                double frac = (double)arr[i] / arr[j];
                fractions.push_back({frac, {arr[i], arr[j]}});
            }
        }
        sort(fractions.begin(), fractions.end());
        return {fractions[k - 1].second.first, fractions[k - 1].second.second};
        
    }
};