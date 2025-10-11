class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>res;
        unordered_set<int>friends_list(friends.begin(),friends.end());
        for(auto it : order)
        {
            if(friends_list.count(it))
            res.push_back(it);
        }
        return res;
    }
};