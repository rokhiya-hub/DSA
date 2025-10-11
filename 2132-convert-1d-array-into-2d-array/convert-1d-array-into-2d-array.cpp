class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& arr, int m, int n) {
        vector<vector<int>>res(m,vector<int>(n));
        if(m*n!=arr.size())
        return {};
        else{
        int i=0;
            for(int r=0;r<m;r++)
            {
                for(int c=0;c<n;c++)
                {
                    res[r][c]=arr[i++];
                }
            }
            return res;
        }
    }
};