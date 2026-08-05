class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long sum=0;
        int i=0;
        int ans=1;
        int j=0;
        while(j<nums.size()) {
            sum+=nums[j];
            while ((long long)nums[j] * (j-i+1)-sum>k) {
                sum -= nums[i];
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};