class Solution {
public:
    string interpret(string s) {
        string res = "";
        for (int i=0; i<s.size();i++) {
            if (s[i]=='G') {
                res+='G';
            }
            else if (s[i]=='(' && s[i+1]==')') {
                res+='o';
                i++;          
            }
            else if (s[i] =='('&& s.substr(i, 4)=="(al)") {
                res+="al";
                i+=3;  
            }
        }
        return res;
    }
};