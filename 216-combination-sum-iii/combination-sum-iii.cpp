class Solution {
public:
void fun(int n,vector<vector<int>>&ans, vector<int>ar,int k,int target)
{
    if(target==0 && ar.size()==k){
    ans.push_back(ar);
    return;
    }
    if(target<0||n>9)
    {
        return;
    }
    fun(n+1,ans,ar,k,target);
    ar.push_back(n);
    fun(n+1,ans,ar,k,target-n);

}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ar;
        fun(1,ans,ar,k,n);
        return ans;
    }
};