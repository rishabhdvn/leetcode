class Solution {
public:
string ans="";
int count=0;
void solve(int n,int k,vector<string>& arr,vector<bool>& used,vector<string>& current){
    if(current.size()==n){
        count++;
        if(count==k){
            for(string& s : current){
                ans+=s;
            }
        }
           return ;
    }
        for(int i=1;i<=n;i++){
            if(!used[i]){
                used[i]=true;
                current.push_back(arr[i]);
                solve(n,k,arr,used,current);
                if(!ans.empty()) return;
                current.pop_back();
                used[i]=false;
            }
        }
    }

    string getPermutation(int n, int k) {
        vector<string> arr={"","1","2","3","4","5","6","7","8","9"};
        vector<bool> used(n+1,false);
        vector<string> current;
        solve(n,k,arr,used,current);
        return ans; 
    }
};