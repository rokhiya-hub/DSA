class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0;
        int j=k;
        
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        cout<<sum<<" ";
        int maxi=sum;
        while(j<n){
            sum=sum-nums[i]+nums[j];
            cout<<sum<<" ";
            maxi = max(sum, maxi);
            i++;
            j++;

        }
        return (maxi/(double)k);
    }
};