class Solution {
public:
    int countVowelSubstrings(string word) {
        int ans=0;
        for(int i=0;i<word.size();i++){
            unordered_map<char,int>mp;
            for(int j=i;j<word.size();j++){
                if(word[j]=='a'||word[j]=='e'||word[j]=='i'||word[j]=='o'||word[j]=='u'){
                    mp[word[j]]++;
                    if(mp.size()==5)
                    ans++;
                }
                else
                break;
            }
        }
        return ans;
    }
};