class Solution {
public:
    int minMoves(vector<int>& nums) {
int ans=0;
for(int i=0;i<nums.size();i++){
    ans=max(ans,nums[i]);
}
int moves=0;
for(int i=0;i<nums.size();i++){
    moves+=(ans-nums[i]);
}
return moves;
    }
};