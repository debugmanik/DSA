class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> temp;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            string s = to_string(nums[i]);
            reverse(s.begin(), s.end());
            temp.push_back(stoi(s));
        }
        ans = nums;
        for(int i = 0; i < temp.size(); i++) {
            ans.push_back(temp[i]);
        }
        unordered_set<int> fq;
        for(int x : ans) {
            fq.insert(x);
        }
        return fq.size();
    }
};