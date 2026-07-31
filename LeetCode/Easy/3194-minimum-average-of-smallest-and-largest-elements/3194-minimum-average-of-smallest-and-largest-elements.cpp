class Solution {
public:
    double minimumAverage(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<double>avg;
        for (int i=0;i<n/2;i++) {
            avg.push_back((nums[i]+nums[n - i - 1])/2.0);
        }
        return *min_element(avg.begin(),avg.end());
    }
};