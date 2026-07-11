class Solution {
public:
void function(vector<vector<int>>&ans, vector<int>candidates,vector<int>ar, int target, int idx)
{
    if(target==0)
    {
        ans.push_back(ar);
        return;
    }
    if(target<0 || idx==candidates.size())
    {
        return;
    }
    function(ans, candidates,ar,target,idx+1 );
    ar.push_back(candidates[idx]);
    //function(ans, candidates,ar,target-candidates[idx],idx+1 );
    function(ans, candidates,ar,target-candidates[idx],idx );

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ar;
        function(ans, candidates,ar,target, 0);
        
        return ans;
    }
};