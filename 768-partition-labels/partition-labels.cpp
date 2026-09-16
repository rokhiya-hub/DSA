class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>m;
        for(int i=s.size()-1;i>=0;i--){
            if(m.find(s[i])==m.end()){
                m[s[i]]=i;
            }
        }

        vector<int>ans;
        int cnt =0;
        int last=m[s[0]];

        for(int i=0;i<s.size();i++){
            cnt++;
            if(m[s[i]]>last){
                last=m[s[i]];
            }
            
            if(i==last){
                ans.push_back(cnt);
                cnt=0;
            }
            
        }
        return ans;
    }
};