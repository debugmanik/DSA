class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
       unordered_set<int>multiples;
        for(int num:nums){
            if(num%k==0)
                multiples.insert(num/k);
        }
        int x=1;
        while(multiples.count(x)){
            x++;
        }
                return x*k;
    }
};