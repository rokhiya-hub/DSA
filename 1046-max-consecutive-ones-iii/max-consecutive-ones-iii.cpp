class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int z=0;
        int i=0;
        int j=0;
        int ans=0;
        int len =0;
        
        while(j<nums.size()){
            
            if(nums[j]==0){
                z++;
            }
            
            while(z>k){
                while(nums[i]!=0){
                 i++;
                }
                z--;
                i++;
            }
            len = j-i+1;
            ans=max(ans,len);
            j++;
        }
        return ans;
    }
};