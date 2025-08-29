class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>res;
        int max=0;
        for(int i=0;i<accounts.size();i++)
        {
            int sum=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                sum+=accounts[i][j];
            }
            if(max<sum)
            max=sum;
        }
        return max;
    }
};