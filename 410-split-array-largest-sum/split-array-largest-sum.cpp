class Solution {
public:
  bool is_valid(vector<int>&arr, int n, int m, int allowed){
      
      int stu =1;
      long long pages=0;
      
      for(int i=0;i<n;i++){
          if(arr[i]>allowed)
          return false;
          
          if(pages+arr[i]<=allowed){
              pages+=arr[i];
          }
          
          else{
              stu++;
              pages=arr[i];
          }
          
      }
        return stu<=m;
  }
    int splitArray(vector<int> &arr, int k) {
        int n=arr.size();
        long long sum=0;
        
        if(k>n)
        return -1;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        long long start=0;
        long long end = sum;
        int ans =-1;
        
        while(start<=end){
            
            long long mid=start+(end-start)/2;
            
            if(is_valid(arr,n,k,mid)){
                ans=mid;
                end = mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }
};