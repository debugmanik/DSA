class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
               int mx=0;
               int mn=101;
  unordered_set<int> st(nums.begin(), nums.end());
               for(auto num:nums){
                mx=max(mx,num);
                mn=min(mn,num);
               }
               nums.clear();
               for(int i=mn;i<mx;i++){
                if(!st.count(i))
                nums.push_back(i);
               }
               return nums;
    }
};