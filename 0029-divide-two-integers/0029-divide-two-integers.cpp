class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;

        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

        long long dividend1 = abs((long long)dividend);
        long long divisor1 = abs((long long)divisor);

        long long quotient = 0;

        for(int i = 31; i >= 0; i--) {
            if(dividend1>=(divisor1<<i)){
                dividend1 -= (divisor1 << i);
                quotient |= (1ll << i);
            }
        }
        return sign * quotient;
    }
};
