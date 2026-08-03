class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int ar_sum=0;
        for(int i=0;i<nums.size();i++){
            ar_sum+=nums[i];
        }
        int target = ar_sum-x;
        
        if(target==0)
        return nums.size();
        else if(target<0)
        return -1;
        cout<<target<<endl;
        int i=0;
        int j=1;
        int len=0;
        int ans =0;
        int curr_sum=nums[i];
        
        
        while(i<=j && j<=nums.size())
        {
            cout<<curr_sum<<" ";
            if(curr_sum>target){
                curr_sum-=nums[i];
                i++;
            }
            else if(curr_sum<target){
                curr_sum+=nums[j];
                j++;

            }
            else{
                len = j-i;
                ans=max(ans,len);
                curr_sum-=nums[i];
                i++;
            }

        }
        cout<<endl<<ans;
        if(ans==0)
        return -1;
        else
        return nums.size()-ans;
    }
};