class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10]={0};
        int ans=0;
        for (int x:digits) {
            freq[x]++;
        }
        for (int i=1;i<10; i++) {
            for (int j=0; j<10;j++) {
                for (int k=0;k<10;k++) {
                    if(i==j && j==k && freq[i]<3)
                    continue;
                    if (k%2!= 0)
                        continue;
                        
                    if (i==j && freq[i]<2)
                        continue;
                    if (i==k && freq[i]<2)
                        continue;
                    if (j==k && freq[j]<2)
                        continue;
                    if (freq[i] && freq[j] && freq[k])
                        ans++;
                }
            }
        }
        return ans;
    }
};