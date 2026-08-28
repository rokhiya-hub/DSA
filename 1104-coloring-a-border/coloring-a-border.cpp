class Solution {
public:
int is_nvalid(int i, int j, int n, int m)
{
    return (i<0 ||j<0 ||i>=n ||j>=m);
}
void solve(vector<vector<int>>& grid,vector<vector<int>>&vis,int i, int j, int oc, int n, int m)
{
    if(is_nvalid(i,j,n,m) || vis[i][j]==1||grid[i][j]!=oc)
    return;

    if(i==0 || j==0 || i==n-1 || j==m-1 || 
        grid[i-1][j]!=oc && grid[i-1][j]!=-1 ||
        grid[i+1][j]!=oc && grid[i+1][j]!=-1 ||
        grid[i][j-1]!=oc && grid[i][j-1]!=-1 ||
        grid[i][j+1]!=oc && grid[i][j+1]!=-1)
    grid[i][j]=-1;

    vis[i][j]=1;
    solve(grid,vis,i+1,j,oc,n,m);
    solve(grid,vis,i-1,j,oc,n,m);
    solve(grid,vis,i,j+1,oc,n,m);
    solve(grid,vis,i,j-1,oc,n,m);
}
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int i, int j, int col) {
        int n =grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        solve(grid,vis,i,j,grid[i][j],n,m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==-1)
                {
                    grid[i][j]=col;
                }
            }
        }
        return grid;
    }
};