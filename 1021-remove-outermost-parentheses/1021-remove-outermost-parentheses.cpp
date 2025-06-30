class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
         int counter=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                counter++;
            }
            else if(s[i]==')'){
                counter--;
            }
         if(counter==1 && s[i]=='(' || counter==0){
                continue;
            }
            else{
                res+=s[i];
            }
        }
        return res;       
    }
};