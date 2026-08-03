class Solution {
public:
bool isPrime(int n){
    if(n<2)
    return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
return true;
}
    int sumOfPrimesInRange(int n) {
        string s=to_string(n);
        reverse(s.begin(),s.end());
        int rev=stoi(s);
        int mini=min(n,rev);
        int maxi=max(n,rev);
        int sum=0;
        for(int i=mini;i<=maxi;i++){
            if(isPrime(i)){
                sum+=i;
            }
            
        }
return sum;
    }
};