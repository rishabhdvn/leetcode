class Solution {
public:
double powHelper(double x,long long n){
    if(n==0) return 1;
    double half=powHelper(x,n/2);
    if(n%2==0) return half*half;
    else return x*half*half;

}
    double myPow(double x, int n) {
        long long N=n;
        if(N<0) N=-N;
        double result=powHelper(x,n);
        return(n<0) ? 1/result : result; 
    }
};