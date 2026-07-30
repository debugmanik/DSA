class Solution {
public:
    bool checkGoodInteger(int n) {
        string s=to_string(n);
        int digitsum=0;
        int squaresum=0;
        for(int i=0;i<s.size();i++){
            int digit=s[i]-'0';
 digitsum+=digit;
 squaresum+=(digit*digit);
        }
        if(squaresum - digitsum >= 50)
        return true;
        else
        return false;
    }
};