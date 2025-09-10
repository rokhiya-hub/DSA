class Solution {
public:
    int largestAltitude(vector<int>& n) {
        int s=0,max=0;
        for(int i=0;i<n.size();i++)
        {
            cout<<s<<" ";
            s=s+n[i];
            if(max<s)
            {
                max=s;
            }
        }
        return max;
    }
};