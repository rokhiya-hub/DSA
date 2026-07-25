class Solution {
public:
bool is_nvalid(int i, int j, int n, int m)
{
    return (i<0 || j<0 ||i>=n ||j>=m);
}
bool solve(vector<vector<char>>& board, string word,int c, vector<vector<int>>&vis, int i, int j, int n, int m)
{
    if(is_nvalid(i,j,n,m) || vis[i][j]==1 )
    return false;

    if(board[i][j]!=word[c])
    return false;

    if(c==word.size()-1)
    return true;
    
    vis[i][j]=1;
    bool x= (solve(board, word, c+1, vis, i+1, j, n, m)||
    solve(board, word, c+1, vis, i-1, j, n, m)||
    solve(board, word, c+1, vis, i, j+1, n, m)||
    solve(board, word, c+1, vis, i, j-1, n, m));
    vis[i][j]=0;
    return x;
}
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0] && solve(board, word,c, vis,i, j, n, m))
                return true;
            }
        }
        return false;
                
    }
};