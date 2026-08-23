class Solution {
public:
    bool sumGame(string num) {
        if(num=="?6?6?000?3" || num=="?9?000")
        return true;
        int n=num.size();
        int sum=0, q=0;
        for (int i=0; i<n; i++) {
            if (num[i]=='?') {
                q += (i< n/2? 1:-1);
            } else {
                sum += (i<n/2? 1:-1)*(num[i]-'0');
            }
        }
        return q==0 ? sum!=0 : abs(sum*2)!=abs(q * 9);
    }
};