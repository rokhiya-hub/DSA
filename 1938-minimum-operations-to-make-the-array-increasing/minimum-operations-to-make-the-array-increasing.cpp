class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int i=0;i<n-1;i++)
        {
            int c=0;
            if(nums[i]>=nums[i+1])
            {
                c = (nums[i]+1)-nums[i+1];
                nums[i+1]+=c;
                ans+=c;
            }
        }
        return ans;
    }
};