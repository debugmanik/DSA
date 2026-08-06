class Solution {
public:
    int smallestNumber(int n, int t) {
      while (true){
            string s=to_string(n);
            int prod=1;
            for (int i=0; i<s.size(); i++) {
                int digit=s[i]-'0';
                prod*=digit;
            }
            if(prod%t==0) {
                return n;
            }
            n++;
        }
    }
};