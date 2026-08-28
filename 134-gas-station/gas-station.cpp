class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int Gas=0;
        int Cost=0;
        int tank=0;
        int start=0;
        for(int i=0;i<gas.size();i++) {
            Gas+=gas[i];
            Cost+=cost[i];
            tank+=gas[i]-cost[i];
            if(tank<0) {
                start=i+1;
                tank=0;
            }
        }
        if(Gas<Cost)
            return -1;
        return start;
    }
};