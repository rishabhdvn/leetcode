class Solution {
public:
    int minAddToMakeValid(string s) {
        int openParenthesis=0;
        int closeParenthesis=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                openParenthesis++;
            }
            else if(s[i]==')' && openParenthesis>0){
                openParenthesis--;
            }
            else{
                closeParenthesis++;
            }
        }
        return openParenthesis+closeParenthesis;
    }
};