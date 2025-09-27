class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int,greater<int>>s(nums.begin(),nums.end());
        vector<int>res;
        int count=0;
        for(auto it = s.begin(); it!=s.end() && count<k;it++,count++)
        {
            res.push_back(*it);
        }
        return res;
    }
};