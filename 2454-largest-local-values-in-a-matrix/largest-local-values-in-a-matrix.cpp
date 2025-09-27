class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>>res(n-2,vector<int>(n-2,0));
        int local_max;
        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                local_max=0;
                for(int k=i-1;k<=i+1;k++)
                {
                    for(int l=j-1;l<=j+1;l++)
                    {
                        local_max=max(local_max,grid[k][l]);
                    }
                }
                res[i-1][j-1]=local_max;
            }
            
        }
        return res;
    }   
};
