class Solution {
public:
vector<vector<int>> ans;
void solve(vector<int>& nums,int i,vector<int>& current){
        ans.push_back(current);
    for(int j=i;j<nums.size();j++){
        if(j>i && nums[j]==nums[j-1]) continue;
    current.push_back(nums[j]);
    solve(nums,j+1,current);
    current.pop_back();
}
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> current;
        solve(nums,0,current);
        return ans; 
    }
};