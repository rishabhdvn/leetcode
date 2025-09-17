class Solution {
public:
int solve(vector<int>& prices,int index,int minSofar,vector<int>& dp){
    if(index==prices.size()) return 0;
    if(dp[index]!=-1) return dp[index];

    int profit_today=prices[index]-minSofar;
    int notTake=solve(prices,index+1,min(prices[index],minSofar),dp);

    return dp[index]=max(profit_today,notTake);
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> dp(n,-1);
        if(n==0) return 0;
        return solve(prices,1,prices[0],dp);
    
    }
};