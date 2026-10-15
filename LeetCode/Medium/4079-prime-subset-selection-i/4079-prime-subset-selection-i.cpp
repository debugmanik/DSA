class Solution {
public:
    void seive(int n, vector<int>& prime){
        prime[0] = prime[1] = 0;
        for(int i = 2; i*i <= n; i++){
            if(prime[i] == 0) continue;
            for(int j = i*i; j <= n; j = j + i){
                prime[j] = 0;
            }
        }
    }
    vector<int> maxPrimes(int n, int s) {
        vector<int> prime(n+1, 1);
        seive(n, prime);
        vector<int> ans;
        long long sum = 0;
        for(int i = 2; i <= n; i++){
            if(prime[i] == 1){
                sum += i;
                if(sum > s) break;
                ans.push_back(i);
            }

        }
        return ans;
    }
};