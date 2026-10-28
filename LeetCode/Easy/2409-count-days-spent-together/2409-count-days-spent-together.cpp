class Solution {
public:
      int days(string &s){
         vector<int>m = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int a=stoi(s.substr(0,2));
        int b=stoi(s.substr(3,2));
        int total=b;
       for(int i=0;i<a-1;i++){
        total+=m[i];
       }
       return total;
        };
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int q=max(days(arriveAlice),days(arriveBob));
        int r=min(days(leaveAlice),days(leaveBob));
        return max(0,r-q+1);
    }
};