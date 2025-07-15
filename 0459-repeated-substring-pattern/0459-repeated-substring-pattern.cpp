class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string concat=s+s;
        string sliced=concat.substr(1,concat.size()-2);
        if(sliced.find(s)!=-1){
            return true;
        }
        return false;  
    }
};