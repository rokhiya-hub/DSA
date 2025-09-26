class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double ans=1e9;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++)
        {
            double avg = (nums[i]+nums[n-i-1])/2.0;
            ans=min(ans,avg);
        }
        return ans;
    }
};