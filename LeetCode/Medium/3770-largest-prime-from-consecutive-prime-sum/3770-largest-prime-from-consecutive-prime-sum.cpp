class Solution {
public:
    int largestPrime(int n) {
        vector<bool> prime(n + 1, true);
        prime[0]=prime[1] = false;
        for(int i=2;i<=n;i++) {
            if(prime[i]){
                for(int j=i*2;j<=n;j+=i) {
                    prime[j] = false;
                }
            }
        }
        int sum=0;
        int ans=0;
        for(int i=2;i<=n;i++) {
            if(prime[i]){
                sum+=i;
                if(sum>n)
                    break;
                if(prime[sum])
                    ans=sum;
            }
        }
        return ans;
    }
};