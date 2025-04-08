class Solution {
public:
void bfs(vector<vector<int>>& isConnected,int Node,vector<bool>& visited){
    queue<int> q;
    q.push(Node);
    visited[Node]=true;
    while(!q.empty()){
        int current=q.front();
        q.pop();
        for(int i=0;i<isConnected.size();i++){
            if(isConnected[current][i]==1 && !visited[i]){
                visited[i]=true;
                q.push(i);
            }
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<bool> visited(V,false);
        int noofComponents=0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                noofComponents++;
                visited[i]=true;
                bfs(isConnected,i,visited);
            }
        }
        return noofComponents;
        
    }
};