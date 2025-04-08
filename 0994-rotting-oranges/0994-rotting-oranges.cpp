class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        queue<pair<int,int>> q;
        int freshoranges=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1){
                    freshoranges++;
                }
            }
        }
        if(freshoranges==0) return 0;
        int minutes=0;
        vector<pair<int,int>> directions={{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            int V=q.size();
            bool rottedthisminute=0;
            for(int i=0;i<V;i++){
                auto[x,y]=q.front();
                q.pop();
                for(auto[dx,dy]:directions){
                    int nx=x+dx;
                    int ny=y+dy;
                    if(nx>=0 && ny>=0 && nx<rows && ny<cols && grid[nx][ny]==1){
                        grid[nx][ny]=2;
                        q.push({nx,ny});
                        freshoranges--;
                        rottedthisminute=true;
                    }
                }
            }
            if(rottedthisminute) minutes++;

        }
        if(freshoranges> 0) return -1;
        return minutes;
        
    }
};