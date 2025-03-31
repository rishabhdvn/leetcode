class Solution {
public:
    int reverse(int x) {
        bool is_negative=x<0;
        string str=to_string(x);
        int left=0;
        int right=str.size()-1;
        while(left<right){
            swap(str[left],str[right]);
            left++;
            right--;
        }
        long long result=stoll(str);
        if(is_negative){
            result=-result;
        }
         if (result > INT_MAX || result < INT_MIN) {
            return 0;
        }
        return result;
        
    }
};