class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int n = num;
        vector<int>arr;
        while(n>0)
        {
            arr.push_back(n%10);
            n/=10;
        }   
        reverse(arr.begin(),arr.end());
        int i=0;
        int j=k;
        int ans =0;
        long long m=1;
        long long x=0;
        for(int y=0;y<k;y++)
        {
            m*=10;
            x=x*10+arr[y];
        }
        int cnt=0;
        if(num%x==0)
        cnt++;
        cout<<x<<" ";
        while(i<j && j<arr.size())
        {
            x=x*10+arr[j]-(m*arr[i]);
            if(x!=0&&num%x==0)
            cnt++;
            cout<<x<<" ";
            i++;
            j++;
        }
        return cnt;
    }
};