class Solution {
public:
    string firstPalindrome(vector<string>& s) {
        string str="";
        for(int i=0;i<s.size();i++)
        {
            int n=s[i].size();
            if(n==1)
            {
                return s[i];
            }
            int cnt=0;
            cout<<n<<endl;
            for(int j=0;j<n/2;j++)
            {
                if(s[i][j]==s[i][n-j-1])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
                if(n>1)
                {
                    if(cnt==n/2)
                    {
                        return s[i];
                    }
                }
            }
        }
        return str;
    }
};