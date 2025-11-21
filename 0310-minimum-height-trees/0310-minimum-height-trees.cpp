class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1) return {0};
        vector<vector<int>> graph(n);
        vector<int> degree(n,0);
        for(auto& e : edges){
            int u=e[0];
            int v=e[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
            degree[u]++;
            degree[v]++;
        }
        queue<int> leaves;
        for(int i=0;i<n;i++){
            if(degree[i]==1){
                leaves.push(i);
            }
        }
        int remaining=n;
        while(remaining>2){
        int leafcount=leaves.size();
        remaining-=leafcount;

        while(leafcount--){
            int leaf=leaves.front();
            leaves.pop();
            for(int nei : graph[leaf]){
                degree[nei]--;
                if(degree[nei]==1){
                    leaves.push(nei);
                }
            }
        }
        }
           vector<int> result;
           while(!leaves.empty()){
            result.push_back(leaves.front());
            leaves.pop();
           }
           return result;
    }
};