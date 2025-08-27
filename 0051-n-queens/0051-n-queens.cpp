class Solution {
public:
vector<vector<string>> ans;
bool isSafe(vector<string>& board,int row,int col,int n){
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q') return false; //column
    }
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){ // upper left diagonal
        if(board[i][j]=='Q') return false;
    }
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){ // upper right diagonal
        if(board[i][j]=='Q') return false;
    }
    return true;
}
void solve(int n,vector<string>& board,int row,int col,int queens){
    if(queens==n){
        ans.push_back(board);
        return ;
    }
    if(row>=n) return ;
    if(col>=n){
        solve(n,board,row+1,0,queens);
        return ;
    }
    if(isSafe(board,row,col,n)){
        board[row][col]='Q';
        solve(n,board,row+1,0,queens+1);
        board[row][col]='.';
    }
    solve(n,board,row,col+1,queens);
}
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        solve(n,board,0,0,0);
        return ans;
        
    }
};