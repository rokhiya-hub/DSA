class Solution {
public:

int is_nvalid(int i, int j, int n, int m)
{
    return (i<0 || j<0 || i>=n || j>=m);
}

// void solve(vector<vector<int>>& grid, vector<vector<int>>&vis, int i, int j, int n, int m,queue<pair<<pair<int,int>,int>>&q)
// {
//     if(is_nvalid(i,j,n,m) || vis[i][j]==1 || q.empty())
//     retrun;

//     vis[i][j]=1;
//     q.push()
//     solve(grid,vis,i+1,j,n,m,q);
//     solve(grid,vis,i-1,j,n,m,q);
//     solve(grid,vis,i,j+1,n,m,q);
//     solve(grid,vis,i,j-1,n,m,q);

// }

    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        int fresh = 0;
        if(n==0 && m==1)
        return -1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                q.push({i,j});
                if(grid[i][j]==1)
                fresh++;
            }
        }
        if(fresh==0)
        return 0;
        //solve(grid,vis,i,j,n,m,q);
        int t=0;
        while(!q.empty())
        {
            int s= q.size();

            for(int i=0;i<s;i++)
            {
                auto [x,y]=q.front();
                q.pop();
                if(!is_nvalid(x+1,y,n,m))
                {
                    if(grid[x+1][y]==1)
                    {
                        q.push({x+1,y});
                        fresh--;
                        grid[x+1][y]=2;
                    }
                }
                if(!is_nvalid(x,y+1,n,m))
                {
                    if(grid[x][y+1]==1)
                    {
                        q.push({x,y+1});
                        fresh--;
                        grid[x][y+1]=2;
                    }
                }
                if(!is_nvalid(x-1,y,n,m))
                {
                    if(grid[x-1][y]==1)
                    {
                        q.push({x-1,y});
                        fresh--;
                        grid[x-1][y]=2;
                    }
                }
                if(!is_nvalid(x,y-1,n,m))
                {
                    if(grid[x][y-1]==1)
                    {
                        q.push({x,y-1});
                        fresh--;
                        grid[x][y-1]=2;
                    }
                }
            }
            t++;
        }
        if(fresh!=0)
        return -1;
        else
        return t-1;

    }
};