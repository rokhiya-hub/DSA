class Solution {
public:
bool is_more(vector<int>& weights, int days,int cap){
    int wt=0;
    int day=1;
    for(int i=0;i<weights.size();i++){
        if(weights[i]>cap)
        return true;
        if(wt+weights[i]<=cap){
            wt+=weights[i];
        }
        else{
            wt=weights[i];
            day++;
        }
    }
    return day>days;

}
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int start = 1;
        int sum =0;
        

        for(int i=0;i<n;i++){
            sum+=weights[i];
        }
        int end = sum;
        int ans = sum;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(is_more(weights,days,mid)){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};