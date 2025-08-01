class Solution {
public:
    string interpret(string str) {
        int i;
        string res;
        for(i=0;i<=str.size();i++)
        {
            if(str[i]== '(' &&str[i+1]==')')
            res+='o';
            else if(str[i]=='(' && str[i+1]=='a'&& str[i+2]=='l'&&str[i+3]==')')
            {
                res+='a';
                res+='l';
            } 
            else if(str[i]=='G')
            res+='G';    
        }
        return res;
    }
};