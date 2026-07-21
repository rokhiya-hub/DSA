class Solution {
public:
void solve(string &s, int target,int i,string path,long eval, long residual,vector<string>&ans)
{
    if(i==s.size() )
    {
        if(eval==target)
        {
            ans.push_back(path);
            cout << path << " -> " << eval << endl;
        }
            return;
    }
    string curr;
    long num=0;
    for(int j=i;j<s.size();j++)
    {
        if(j>i && s[i]=='0')
        break;
        curr+=s[j];
        num=num*10+s[j]-'0';
        if(i==0)
        {
            solve(s,target, j+1,path+curr,eval+num,num,ans);
        }
        else{
        solve(s,target, j+1,path+"+"+curr,eval+num,num,ans);
        solve(s,target, j+1,path+"-"+curr,eval-num,-num,ans);
        solve(s,target, j+1,path+"*"+curr,eval - residual + residual * num,residual * num,ans);
        }

    }
}
    vector<string> addOperators(string num, int target) {
        vector<string>ans;
        string s;
        solve(num,target,0,"",0,0,ans);
        return ans;
    }
};