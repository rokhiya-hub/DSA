class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
    unordered_map<int, int> freq;
    vector<int> result;

    for (int num : nums)
        freq[num]++;

    for (auto& p : freq)
        if (p.second == 2)
            result.push_back(p.first);

    return result;
    }
};