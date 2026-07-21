class Solution {
public:
void solve (vector<vector<char>>&grid, vector<vector<int>>&vis,int i,int j,int m,int n)
{
    if(i<0 || j<0 ||j>=m || i>=n|| grid[i][j]=='0'||vis[i][j]==1)
    return;
    vis[i][j]=1;

    solve(grid, vis,i+1,j,m,n);
    solve(grid, vis,i-1,j,m,n);
    solve(grid, vis,i,j+1,m,n);
    solve(grid, vis,i,j-1,m,n);
    return;
}
    int numIslands(vector<vector<char>>& grid) {
        
        int n=grid.size();
        int m =grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1' && vis[i][j]==0){
                solve(grid, vis,i,j,m,n);
                ans++;}
            }
        }
        return ans;
    }
};