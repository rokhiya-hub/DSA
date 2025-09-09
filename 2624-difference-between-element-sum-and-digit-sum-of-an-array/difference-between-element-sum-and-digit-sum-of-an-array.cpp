class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int s1=0;
        int s2=0;
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            s1+=x;
            while(nums[i]>0)
            {
                s2+=nums[i]%10;
                nums[i]/=10;
            }
        }
        return abs(s2-s1);
    }
};