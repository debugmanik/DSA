class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
         int n=arr.size();
        int i=0;
        int j=0;
        int currSum=0;
        vector<int>minidx(n, INT_MAX);
        int minlen=INT_MAX;
        int result=INT_MAX;
        while(j<n) {
            currSum+=arr[j];
            while(i<j && currSum>target) {
                currSum-=arr[i++];
            }
            if(currSum==target) {
                int len=j-i+1;
                if(i>0 && minidx[i-1]!=INT_MAX) {
                    result=min(result,len+minidx[i-1]);
                }
            minlen=min(minlen, len);
            }
            minidx[j]=minlen;
            j++;
        }
        return result==INT_MAX?-1:result;
    }
};