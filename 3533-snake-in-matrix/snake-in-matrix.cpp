class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i=0;
        int j=0;
        for(auto x:commands)
        {
            if(x=="DOWN")
            i++;
            else if(x=="RIGHT")
            j++;
            else if(x=="LEFT")
            j--;
            else
            i--;
        }
        return (i*n)+j;
    }
};