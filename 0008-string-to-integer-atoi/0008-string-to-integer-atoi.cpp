class Solution {
public:
int parseDigits(string s,int index,long long num,int sign){
    int n=s.size();
    if(index>=n || !isdigit(s[index])) return (int)(num*sign);
    if(num==0 && s[index]=='0'){
        return parseDigits(s,index+1,0,sign);
    }
    num=num*10+(s[index]-'0');
    if(sign==1 && num>INT_MAX) return INT_MAX;
    if(sign==-1 && -num<INT_MIN) return INT_MIN;
   return parseDigits(s,index+1,num,sign);
}
    int myAtoi(string s) {
        int n=s.size();
        int index=0;
        while(index<n && s[index]==' ')index++;
        int sign=1;
        if(index<n && (s[index]=='+' || s[index]=='-')){
            if(s[index]=='-') sign=-1;
            index++;
        }
        return parseDigits(s,index,0,sign);
        
    }
};