class Solution {
public:

int solve(vector<vector<int>>& grid,vector<vector<int>>& vis,int i,int j,int n,int m)
{
    if(i<0 || j<0 || i>=n || j>=m ||grid[i][j]==0 || vis[i][j])
        return 0;

    vis[i][j]=1;

    int gold = grid[i][j];

    int down  = solve(grid,vis,i+1,j,n,m);
    int up    = solve(grid,vis,i-1,j,n,m);
    int right = solve(grid,vis,i,j+1,n,m);
    int left  = solve(grid,vis,i,j-1,n,m);

    vis[i][j]=0;

    return gold + max({down,up,right,left});
}
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)
                {
                    ans=max(ans,solve(grid,vis, i,j,n,m));
                }
            }
        }
        return ans;
    }
};