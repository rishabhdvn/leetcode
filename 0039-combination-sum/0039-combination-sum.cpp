class Solution {
public:
vector<vector<int>> ans;
void solve(int i,vector<int>& candidates,int target,vector<int>& current){
    if(target==0){
        ans.push_back(current);
        return;
    }
    if(i>=candidates.size() || target<0){
        return;
    }
    current.push_back(candidates[i]);
    solve(i,candidates,target-candidates[i],current);
    current.pop_back();
    solve(i+1,candidates,target,current);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> current;
        solve(0,candidates,target,current);
        return ans;
        
    }
};