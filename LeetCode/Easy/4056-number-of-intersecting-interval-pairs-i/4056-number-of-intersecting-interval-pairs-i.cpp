class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
         long long count=0;
        for(long long i =0;i<intervals.size();i++){
            for(long long j =i+1;j<intervals.size();j++){
                if(intervals[i][0]<=intervals[j][1] && intervals[j][0]<=intervals[i][1]){
                        count++;
                }
            }
        }
        return count;
    }
};