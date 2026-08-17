class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int to_be_rem = sum-k;

            if(mp.count(to_be_rem)!=0)
                cnt+=mp[to_be_rem];
            
            mp[sum]++;
           

        }
        cout<<endl;
        
        return cnt;
    }
};