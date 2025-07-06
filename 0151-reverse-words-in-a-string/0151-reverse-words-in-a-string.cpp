class Solution {
public:
    string reverseWords(string s) {
        int left=0;
        int right=s.size()-1;
        string temp="";
        string res="";
        while(left<=right){
            char ch=s[left];
            if(ch!=' '){
                temp+=ch;
            }
            else if(!temp.empty()){
                if(!res.empty()){
                    res=temp+" "+res;
                }
                else{
                    res=temp;
                }
                temp="";
            }
            left++;
        }
          if(!temp.empty()){
                if(!res.empty()){
                    res=temp+" "+res;
                }
                else{
                    res=temp;
                }
          }
          return res;
        
    }
};