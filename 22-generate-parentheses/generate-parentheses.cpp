class Solution {
public:

void fun(string s, int n, vector<string>&ans, int ou)
{
    if(n==0 && ou==0)
    {
        ans.push_back(s);
        return;
    }
    if(n>0)
    {
        fun(s+'(',n-1,ans,ou+1);
    }
    if(ou>0)
    {
        fun(s+')',n,ans,ou-1);
    }

}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        fun(s,n,ans,0);
        return ans;
    }
};