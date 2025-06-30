class Solution {
public:
    string largestOddNumber(string num) {
        string res="";
        for(int i=0;i<num.size();i++){
            if((num[i]-'0')%2 !=0) {
                res=num.substr(0,i+1);
            }
        }
        return res;     
    }
};