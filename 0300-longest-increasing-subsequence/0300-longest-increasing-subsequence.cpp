class Solution {
public:
int n;
int helper(int current,int prev_index,vector<int>& nums,vector<vector<int>>& dp){
    if(current==n) return 0;
    if(dp[current][prev_index+1]!=-1) return dp[current][prev_index+1];
    int taken=0;
    if(prev_index==-1 || nums[current]>nums[prev_index]){
        taken=1+helper(current+1,current,nums,dp);
    }
    int notTaken=helper(current+1,prev_index,nums,dp);
   return dp[current][prev_index+1]=max(taken,notTaken);
}
    int lengthOfLIS(vector<int>& nums) {
        n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return helper(0,-1,nums,dp);
    }
};