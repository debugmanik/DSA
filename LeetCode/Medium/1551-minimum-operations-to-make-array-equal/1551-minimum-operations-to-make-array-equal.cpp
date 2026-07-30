class Solution {
public:
    int minOperations(int n) {
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back((2*i)+1);
        }
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
        }
        int target=sum/n;
        int mid=n/2;
        int operations = 0;
        for (int i=0;i<mid;i++) {
            operations+=target-ans[i];
        }
        return operations;

    }
};