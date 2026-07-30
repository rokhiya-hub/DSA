class NumMatrix {
public:
vector<vector<int>>prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m=matrix[0].size();
        prefix.resize(n,vector<int>(m+1));
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<=m;j++)
            {
                if(j==0)
                prefix[i][j]=0;
                else{
                sum+=matrix[i][j-1];
                prefix[i][j]+=sum;
                }
                cout<<prefix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans=0;
        for(int i=row1;i<=row2;i++)
        {
            
            ans+=(prefix[i][col2+1]-prefix[i][col1]);
            
        }
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */