class Solution {
public:
vector<string> ans;
void solve(string current,int n){
    if((int)current.size()==n){
        ans.push_back(current);
        return ;
    }
    if(current.empty() || current.back()!='0'){
        solve(current+"0",n);
    }
    solve(current+"1",n);
}
    vector<string> validStrings(int n) {
        solve("",n);
        return ans;
        
    }
};