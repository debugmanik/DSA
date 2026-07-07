class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        long long num=0;
        int sum=0;
        for (int i=0;i<s.size();i++) {
            int digit=s[i]-'0';
            if (digit!=0) {
                sum+=digit;
                num=num*10+digit;
            }
        }
        return num*sum;
    }
};