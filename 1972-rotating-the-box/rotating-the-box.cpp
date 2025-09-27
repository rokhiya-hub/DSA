class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int row=box.size();
        int col=box[0].size();
        vector<vector<char>>ans(col,vector<char>(row,0));
        for(int i=0;i<row;i++)
        {
            int empty=col-1;
            for(int j=col-1;j>=0;j--)
            {
                if(box[i][j]=='*')
                {
                    empty=j-1;
                }
                else if(box[i][j]=='#')
                {
                    swap(box[i][empty],box[i][j]);
                    empty--;
                } 
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                ans[j][row-1-i]=box[i][j];
            }
        }
        return ans;
    }
};