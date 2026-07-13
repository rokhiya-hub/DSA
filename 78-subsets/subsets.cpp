class Solution {
public:
void fun(vector<int>nums, vector<vector<int>>&ans, vector<int>ar,int i)
{
    if(i==nums.size()){
    ans.push_back(ar);
    return;
    }
    fun(nums, ans, ar, i+1);
    ar.push_back(nums[i]);
    fun(nums,ans, ar,i+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ar;
        fun(nums, ans, ar,0);
        return ans;
    }
};