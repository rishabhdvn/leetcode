class Solution {
public:
    int reverse(int x) {
    long long reverse=0;
        while(x!=0){
        int digit=x%10;
        reverse=reverse*10+digit;
        x/=10;
    }
    if(reverse<INT_MIN || reverse>INT_MAX) return 0;
    return (int)reverse;
    }
};