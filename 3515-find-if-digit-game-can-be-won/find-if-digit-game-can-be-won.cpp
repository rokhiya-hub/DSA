class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s=0,d=0;
        for(int i=0;i<nums.size();i++)
        {
            if((int(log10(nums[i]))==1))
            s+=nums[i];
            else
            d+=nums[i];
        }
        if(abs(s-d)==0)
        return false;
        else
        return true;
    }
};