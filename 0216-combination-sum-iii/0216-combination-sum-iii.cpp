class Solution {
public:
vector<vector<int>> ans;
void solve(int k,int n,int i,vector<int>& current,vector<int>& arr){
    if(n==0 && current.size()==k){
        ans.push_back(current);
        return ;
    }
    if(i>=arr.size() || n<0 || current.size()>k) return;
    current.push_back(arr[i]);
    solve(k,n-arr[i],i+1,current,arr);
    current.pop_back();
    solve(k,n,i+1,current,arr);
}

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> current;
          vector<int> arr={1,2,3,4,5,6,7,8,9};
        solve(k,n,0,current,arr);
        return ans;
        
    }
};