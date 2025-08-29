class Solution {
public:
    int minPartitions(string n) {
        int max=0;
        for(int i=0;i<n.size();i++)
        {
            if(max<(int)n[i]-48)
            max=(int)n[i]-48;
        }
        return max;
    }
};