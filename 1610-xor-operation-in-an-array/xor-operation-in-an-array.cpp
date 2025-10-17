class Solution {
public:
    int xorOperation(int n, int start) {
        int cnt =0;
        int res=0;
        for(int i=start;cnt++<n;i+=2)
        {
           res^=i;
        }
        return res;
    }
};