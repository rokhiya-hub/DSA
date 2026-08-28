class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0;i<m;i++)
        {
            int k=queries[i];
            int cnt=0;
            int sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=nums[i];
                if(sum<=k)
                cnt++;
            }
            cout<<cnt<<" ";
            ans.push_back(cnt);
        }
        return ans;
    }
};