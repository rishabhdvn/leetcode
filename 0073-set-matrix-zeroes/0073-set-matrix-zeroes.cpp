class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<pair<int,int>> directions={{-1,0},{1,0},{0,-1},{0,1}};
        vector<vector<int>> original=matrix;
        for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(original[i][j]==0){
                for(auto[dx,dy]: directions){
                    int nx=i+dx;
                    int ny=j+dy;
                    while(nx>=0 && nx<rows && ny>=0 && ny<cols){
                        matrix[nx][ny]=0;
                        nx+=dx;
                        ny+=dy;
                    }
                }
            }
        }
        }
    }
};