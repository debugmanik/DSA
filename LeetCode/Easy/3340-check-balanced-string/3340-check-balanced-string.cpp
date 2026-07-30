class Solution {
public:
    bool isBalanced(string num) {
        int oddsum=0;
        int evensum=0;
        for(int i=0;i<num.size();i++){
            int digit=num[i]-'0';
            if(i%2==0){
evensum+=digit;
            }else
            oddsum+=digit;
        }
        if(evensum==oddsum)
        return true;
        else
        return false;

    }
};