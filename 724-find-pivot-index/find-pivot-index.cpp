class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>t(n);
        t[0]= nums[0];
        for(int i  = 1 ; i< n ; i++)
            {
                t[i] = nums[i]+t[i-1];
            }
        int l;
        for(int i =0;i<n;i++)
            {
                if(i==0)
                    l = 0;
                else
                    l=t[i-1];
                int r = t[n-1]-t[i];
                if(l==r){
                  return i;  
                break;
                }
            }
        return -1;
    }
};