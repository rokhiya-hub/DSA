class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(s.size()<k)
        {
            string res;
            for(int i=0;i<s.size();i++)
            {
                res+=s[i]+1;
            }
            s+=res;
        }
        return s[k-1];
    }
};