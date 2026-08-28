class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0;
        int j=k-1;
        int cnt=0;
        int n=s.size();
        int ans=0;
        for(i=0;i<=j;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            cnt++;
            cout<<cnt<<" ";
            }
        }
        i=0;
         j=k;
        ans=cnt;
        while(i<=j && j<n)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            cnt--;
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
            cnt++;
            if(ans<cnt)
            ans=cnt;
            i++;
            j++;
        }
        return ans;
    }
};