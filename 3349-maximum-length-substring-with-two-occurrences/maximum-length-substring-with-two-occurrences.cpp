class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char,int>mp;
        int i=0;
        int j=0;
        int ans=0;
        while(i<=j && j<s.size()){
            mp[s[j]]++;
            for(auto m:mp){
                cout<<m.first<<m.second;
                if(m.second>2){
                    mp[s[i]]--;
                    i++;
                }
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};