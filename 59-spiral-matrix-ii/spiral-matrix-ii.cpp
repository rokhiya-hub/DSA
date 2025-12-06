class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>res(n,vector<int>(n));
        int val=1;
        int top=0;
        int bottom=n-1;
        int right=n-1;
        int left=0;
        while(top<=bottom && left<=right)
        {
            //top
            for(int i=left;i<=right;i++)
            {
                res[top][i]=val++;
            }
            top++;
            //right
            for(int i=top;i<=bottom;i++)
            {
                res[i][right]=val++;
            }
            right--;
            //bottom
            for(int i=right ;i>=left;i--)
            {
                res[bottom][i]=val++;
            }
            bottom--;
            //left
            for(int i=bottom;i>=top;i--)
            {
                res[i][left]=val++;
            }
            left++;
        }
        return res;
    }
};