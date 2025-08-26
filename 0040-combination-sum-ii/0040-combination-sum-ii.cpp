class Solution {
public:
vector<vector<int>> ans;
void solve(int i,vector<int>& candidates,int target,vector<int> current){
    if(target==0){
        ans.push_back(current);
        return ;
    }
    if(i>=candidates.size() || target<0){
        return;
    }
    for(int j=i;j<candidates.size();j++){
        if( j>i && candidates[j]==candidates[j-1]) continue;
        if(candidates[j]>target) break;
    
    current.push_back(candidates[j]);
    solve(j+1,candidates,target-candidates[j],current);
    current.pop_back();
}
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> current;
        solve(0,candidates,target,current);
        return ans; 
    }
};