class Solution {
public:
void dfs(vector<vector<char>>& board,vector<vector<int>>&vis,int i, int j, int n, int m)
{
    if(i<0 || j<0 || i>=n || j>=m||board[i][j]=='X'||vis[i][j]==1)
    return;

    vis[i][j]=1;
    board[i][j]='.';
    dfs(board,vis,i+1,j,n,m);
    dfs(board,vis,i,j+1,n,m);
    dfs(board,vis,i,j-1,n,m);
    dfs(board,vis,i-1,j,n,m);

}
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            dfs(board,vis,i,0,n,m);
            dfs(board,vis,i,m-1,n,m);
        }

        for(int j=0;j<m;j++)
        {
            dfs(board,vis,0,j,n,m);
            dfs(board,vis,n-1,j,n,m);
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {              
                if(board[i][j]=='O')
                board[i][j]='X';  
                if(board[i][j]=='.')
                board[i][j]='O';              
            }
        }
          
            
    }
};