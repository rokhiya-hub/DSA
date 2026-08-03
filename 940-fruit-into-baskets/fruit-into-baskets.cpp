class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0;
        int j=0;
        int len=0;
        int ans=0;
        unordered_map<int,int>mp;
        while(j<fruits.size()){
            mp[fruits[j]]++;
            if(mp.size()>2){ 
                while(mp.size()>2 && i<fruits.size())
                {

                    mp[fruits[i]]--;
                    if(mp[fruits[i]]==0)
                    mp.erase(fruits[i]);
                    i++;
                }
            }
            
            len=j-i+1;
            ans=max(len,ans);
            j++;
        }
        return ans;
    }
};