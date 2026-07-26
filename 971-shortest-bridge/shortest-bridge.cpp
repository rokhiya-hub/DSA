class Solution {
public:
int is_nvalid(int i, int j, int n, int m)
{
    return (i<0 ||j<0 ||i>=n ||j>=n);
}
void solve(vector<vector<int>>& grid, int i, int j,int n,queue<pair<int,int>>&q)
{
    if(is_nvalid(i,j,n,n) || grid[i][j]!=1)
    return ;
    if(grid[i][j]==1){
    grid[i][j]=2;
    q.push({i,j});
    }

    solve(grid,i+1,j,n,q);
    solve(grid,i-1,j,n,q);
    solve(grid,i,j+1,n,q);
    solve(grid,i,j-1,n,q);


}
    int shortestBridge(vector<vector<int>>& grid) {
        int n=grid.size();
        int fi=-1;
        int fj=-1;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    fi=i;
                    fj=j;
                    break;
                }
            }
        }
        
        queue<pair<int,int>>q;
        solve(grid,fi,fj,n,q);

        int dis=0;
        while(!q.empty())
        {
            int s=q.size();
            while(s--)
            {
                int currx=q.front().first;
                int curry=q.front().second;
                q.pop();
                if(!is_nvalid(currx+1,curry,n,n) && grid[currx+1][curry]==1)
                    return dis;
                else if(!is_nvalid(currx+1,curry,n,n) && grid[currx+1][curry]==0){
                    grid[currx][curry]=-1;
                    q.push({currx+1,curry});
                }

                if(!is_nvalid(currx-1,curry,n,n) && grid[currx-1][curry]==1)
                    return dis;
                else if(!is_nvalid(currx-1,curry,n,n) && grid[currx-1][curry]==0){
                    grid[currx-1][curry]=-1;
                    q.push({currx-1,curry});
                }

                if(!is_nvalid(currx,curry+1,n,n) && grid[currx][curry+1]==1)
                    return dis;
                else if(!is_nvalid(currx,curry+1,n,n) && grid[currx][curry+1]==0){
                    grid[currx][curry+1]=-1;
                    q.push({currx,curry+1});
                }

                if(!is_nvalid(currx,curry-1,n,n) && grid[currx][curry-1]==1)
                    return dis;
                else if(!is_nvalid(currx,curry-1,n,n) && grid[currx][curry-1]==0){
                    grid[currx][curry-1]=-1;
                    q.push({currx,curry-1});
                }
            }
            dis++;
        }
        return dis;
    }
};