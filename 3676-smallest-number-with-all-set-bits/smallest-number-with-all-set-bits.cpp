class Solution {
public:
    int smallestNumber(int n) {
        int j=0;
        for(int i=0;i<32;i++)
        {
            if(pow(2,i)>n)
            {
                j=pow(2,i)-1;
                break;
            }
        }
        return j;
    }
};