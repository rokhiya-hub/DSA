class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        priority_queue<long long>pq(gifts.begin(),gifts.end());
        while(k--)
        {
            long long top =pq.top();
            pq.pop();
            pq.push((long long) floor(sqrt(top)));
        }
        long long sum=0;
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};