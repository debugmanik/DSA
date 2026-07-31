class Solution {
public:
    int minimumSum(int num) {
 string s=to_string(num);
        sort(s.begin(),s.end());
        int n=s.size();
        string a = "", b = "";
        for(int i=0;i<s.size();i++){
     if (i%2==0)
                a+=s[i];
            else
                b+=s[i];
    }
            return stoi(a)+stoi(b);
    
    }
};