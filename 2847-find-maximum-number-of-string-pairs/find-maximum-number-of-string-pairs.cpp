class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt =0;
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words.size();j++)
            {
                string s=words[i];
                reverse(s.begin(),s.end());
                if(i!=j){
                    if(s==words[j])
                    {
                        cnt++;
                    }
                }
            }
        }
        return cnt/2;
    }
};