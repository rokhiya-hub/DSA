
class Solution {
public:
    vector<string> ans;

    void solve(string &s, int index, int parts, string temp) {
        if (parts == 4) {
            if (index == s.size()) {
                temp.pop_back();
                ans.push_back(temp);
            }
            return;
        }

        for (int len = 1; len <= 3; len++) {
            if (index + len > s.size())
                break;

            string sub = s.substr(index, len);

            if (sub.size() > 1 && sub[0] == '0')
                continue;

            if (stoi(sub) > 255)
                continue;

            solve(s, index + len, parts + 1,
                  temp + sub + ".");
        }
    }

    vector<string> restoreIpAddresses(string s) {
        if (s.size() < 4 || s.size() > 12)
            return {};

        solve(s, 0, 0, "");
        return ans;
    }
};
