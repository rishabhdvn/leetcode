class Solution {
public:
vector<string> ans;
void solve(string digits,int i,vector<string>& arr,string& current){
    if(i==digits.size()){
        ans.push_back(current);
        return ;
    }
    string letters=arr[digits[i]-'0'];
    for(char ch:letters){
    current.push_back(ch);
    solve(digits,i+1,arr,current);
    current.pop_back();
    }
  
}

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> arr={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string current;
        solve(digits,0,arr,current);
        return ans;

        
    }
};