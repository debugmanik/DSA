class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> mp;  // key = number, value = index
        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int more = target - num;
            // Check: kya 'more' already map mein hai?
            if(mp.find(more) != mp.end()) {
                // Mil gaya dono number — return unke indexes
                return {mp[more], i};
            }
            // Nahi mila to current number ko store karo.   
            mp[num] = i;
        }
        return {}; 
    }
};
