class Solution {
public:
const long long MOD=1e9+7;
long long ModPow(long long base,long long exp){
    if(exp==0) return 1;
    long long half=ModPow(base,exp/2);
    long long ans=(half*half)%MOD;
    if(exp%2==1) ans=(ans*base)%MOD;
    return ans;
}
    int countGoodNumbers(long long n) {
        long long evenHalf=(n+1)/2;
        long long oddHalf=(n)/2;
        long long ways=(ModPow(5,evenHalf)*ModPow(4,oddHalf))%MOD;
        return (int)ways;
        
    }
};