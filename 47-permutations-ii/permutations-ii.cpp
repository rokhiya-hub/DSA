class Solution {
public:
    void fun(vector<vector<int>>& ans, vector<int>& ar,
             vector<int>& nums, int n, vector<int>& vis)
    {
        if (ar.size() == n) {
            ans.push_back(ar);
            return;
        }

        for (int i = 0; i < n; i++) {

            if (vis[i] == 1)
                continue;

            // Skip duplicates
            if (i > 0 && nums[i] == nums[i - 1] && vis[i - 1] == 0)
                continue;

            vis[i] = 1;
            ar.push_back(nums[i]);

            fun(ans, ar, nums, n, vis);

            ar.pop_back();
            vis[i] = 0;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ar;
        vector<int> vis(nums.size(), 0);

        sort(nums.begin(), nums.end());

        fun(ans, ar, nums, nums.size(), vis);

        return ans;
    }
};