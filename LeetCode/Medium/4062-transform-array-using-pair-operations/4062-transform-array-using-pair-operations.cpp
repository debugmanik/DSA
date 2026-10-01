class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        typedef long long ll;
        ll sum1=0,sum2=0;
        for(auto it:source){
            sum1+=it;  
        }
        for(auto it:target){
            sum2+=it;
        }
        return sum1==sum2 ;
    }
};