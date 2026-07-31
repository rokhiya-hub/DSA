class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int cnt =0;
        int sum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int x = ((sum%k)+k)%k;
            if(mp.count(x)!=0){
                cnt+=mp[x];
                mp[x]+=1;
            }
            else
            mp[x]++;
        }
        for(auto &m:mp)
        {
            cout<<m.first<<"->"<<m.second<<endl;
        }
        return cnt;
    }
};