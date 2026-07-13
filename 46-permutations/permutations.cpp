class Solution {
public:
void fun(vector<int>nums, vector<int>ar, vector<vector<int>>&ans, vector<int>vis,int n)
{
    if(nums.size()==ar.size())
    {
        ans.push_back(ar);
    }
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            ar.push_back(nums[i]);
            vis[i]=1;
        fun(nums, ar,ans, vis,n);
        vis[i]=0;
        ar.pop_back();
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        vector<int>ar;
        vector<int>vis(n,0);
        fun(nums, ar, ans,vis,n);
        return ans;
    }
};