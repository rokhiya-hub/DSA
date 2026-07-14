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
        s+='(';
        fun(s,n-1,ans,ou+1);
        s.pop_back();
    }
    if(ou>0)
    {
        s+=')';
        fun(s,n,ans,ou-1);
        s.pop_back();
    }

}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        fun(s,n,ans,0);
        return ans;
    }
};