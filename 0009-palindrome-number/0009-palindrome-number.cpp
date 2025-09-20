class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;
        long long rev=0;
        int original=x;
        while(x>0){
            int digit=x%10;
            rev=rev*10+digit;
            x/=10;
        }
        if((int)rev==original) return true;

      return false;
        
    }
};