class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
    string s= to_string(x);
        int ptr1=0;
        int ptr2=s.size()-1;
        while(ptr1<ptr2){
            if(s[ptr1]==s[ptr2]){
                ptr1++;
                ptr2--;
            }
            else{
                return false;
            }
            
        }
        return true;
        
    }
};