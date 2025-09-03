class Solution {
public:
    string convertToTitle(int n) {
        string str = "";
        while(n>0)
        {
            n--;
            int x=n/26;
            int y=n%26;
            char ch ='A'+y;
            str = ch+str;
            n=x;
        }
        return str;
    }

};