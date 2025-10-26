class Solution {
public:
int robRecursive(vector<int>& nums,int index,vector<int>& dp){
    if(index>=nums.size()) return 0;
    if(dp[index]!=-1) return dp[index];
    int take=nums[index]+robRecursive(nums,index+2,dp);
    int notTake=robRecursive(nums,index+1,dp);
    dp[index]=max(take,notTake);
    return dp[index];
}
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return robRecursive(nums,0,dp);
        
    }
};