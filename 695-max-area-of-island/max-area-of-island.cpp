class Solution {
public:
int solve(vector<vector<int>>& grid,int i, int j, int n, int m,int& a)
{
    if(i<0 || j<0 ||j>=m || i>=n|| grid[i][j]==0)
    return a;

    grid[i][j]=0;
    a++;
    solve(grid,i+1,j,n,m,a);
    solve(grid,i,j+1,n,m,a);
    solve(grid,i,j-1,n,m,a);
    solve(grid,i-1,j,n,m,a);
    return a;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int a=0;
       int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1){
                ans=max(ans,solve(grid,i,j,n,m,a));
                }
                a=0;
            }
        }
        return ans;
    }
};