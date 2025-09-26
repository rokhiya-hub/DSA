class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p=0,ne=1;
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ans[p]=nums[i];
                p+=2;
            }
            else
            {
                ans[ne]=nums[i];
                ne+=2;
            }
        }
        return ans;
    }
};