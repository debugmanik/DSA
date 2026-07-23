class Solution {
public:
    int minElement(vector<int>& nums) {
         int ans=INT_MAX;
        for (int num:nums) {
            int digit=0;
            while (num) {
                digit+=num%10;
                num/=10;
            }
            ans=min(ans,digit);
        }
        return ans;
    }
};