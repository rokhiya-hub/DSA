class Solution {
public:
int is_valid(int i, int j, int n, int m)
{
    return (i<0 ||j<0 ||i>=n ||j>=m);
}

void solve(vector<vector<char>>& grid,vector<vector<int>>vis,int i, int j, int n, int m)
{
    if(is_valid(i,j,n,m)||grid[i][j]=='.')
    {
        return;
    }
    grid[i][j]='.';
    solve(grid,vis,i+1,j,n,m);
    solve(grid,vis,i-1,j,n,m);
    solve(grid,vis,i,j+1,n,m);
    solve(grid,vis,i,j-1,n,m);

}
    int countBattleships(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='X'){
                solve(grid,vis,i,j,n,m);
                ans++;
                }
            }
        }
        return ans;
    }
};