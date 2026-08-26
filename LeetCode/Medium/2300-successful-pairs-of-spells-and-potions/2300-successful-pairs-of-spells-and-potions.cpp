class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> ans;
        for(int spell:spells){
            long long x=ceil((double)success / spell);
            int idx=lower_bound(potions.begin(),potions.end(),x)-potions.begin();
            ans.push_back(potions.size()-idx);
        }
        return ans;
    }
};