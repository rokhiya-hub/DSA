class Solution {
public:
long long fun(vector<int>&arr,int hr){
    long long hrs=0;
    for(int i=0;i<arr.size();i++){
        hrs+=ceil((double)arr[i]/hr);
    }
    return hrs;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi =0;
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi, piles[i]);
        }
        int start =1;
        int end = maxi;
        int ans = INT_MAX;

        while(start<=end){
            int mid=start+(end-start)/2;
            long long hrs= fun(piles, mid);
            if(hrs<=h){
                ans=mid;
                end=mid-1;
            }
            else
            start = mid+1;
        }
        return ans;
    }
};