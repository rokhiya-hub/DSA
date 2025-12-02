class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            int c = int(s[i]);
            sum+=(i+1)*(27-(c-96));
        }
        return sum;
    }
};