class Solution {
public:
int is_nvalid(int i, int j, int n, int m)
{
    return (i<0 ||j<0 ||i>=n ||j>=m);
}
void solve(vector<vector<int>>& grid,vector<vector<int>>&vis,int i, int j, int n, int m,int& a)
{
    
    if(is_nvalid(i,j,n,m)||grid[i][j]==0)
    {
        a++;
        return;
    }
    if(vis[i][j]==1)
    {
        return;
    }
    

    vis[i][j]=1;
    solve(grid,vis,i+1,j,n,m,a);
    solve(grid,vis,i-1,j,n,m,a);
    solve(grid,vis,i,j+1,n,m,a);
    solve(grid,vis,i,j-1,n,m,a);
    
}
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int a=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 )
                solve(grid,vis,i,j,n,m,a);
            }
        }
        return a;
    }
};