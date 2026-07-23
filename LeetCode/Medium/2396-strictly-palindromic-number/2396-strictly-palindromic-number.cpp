class Solution {
public:
 bool ispalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i<j) {
            if (s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    bool isStrictlyPalindromic(int n) {
       for (int i=2;i<=n-2;i++) {
            int num = n;
            string s = "";
            while (num>0) {
                s+=to_string(num % i);
                num/=i;
            }
            if (!ispalindrome(s))
                return false;
        }
        return true;
    }
};