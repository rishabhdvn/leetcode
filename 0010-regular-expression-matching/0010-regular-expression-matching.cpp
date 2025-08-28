class Solution {
public:
bool solve(string& s,string& p,int i,int j,vector<vector<int>>& dp){
    if(dp[i][j]!=-1) return dp[i][j];
    if(j==p.size()){
        return dp[i][j]=(i==s.size());
    }
    bool firstMatch=(i<s.size() && (s[i]==p[j] || p[j]=='.'));
    if(j+1<p.size() && p[j+1]=='*'){
        bool ans=solve(s,p,i,j+2,dp) || (firstMatch && solve(s,p,i+1,j,dp));
        return dp[i][j]=ans;
    } else
    {
        if(firstMatch){
            return dp[i][j]=solve(s,p,i+1,j+1,dp);
        }
        else{
            return dp[i][j]=false;
        }
    }
}
    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.size()+1,vector<int>(p.size()+1,-1));
        return solve(s,p,0,0,dp);
    }
};