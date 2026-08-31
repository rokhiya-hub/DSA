class Solution {
public:
bool is_valid(vector<int>& position, int dist,int m) {
    int b=1;
    int pos=position[0];
    for(int i=1;i<position.size();i++){
        if(position[i] - pos >= dist){
            b++;
            pos = position[i];
        }
        if(b>=m)
        return true;
    }
    return false;
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int start=1;
        int ans=0;
        int end=position[position.size()-1];
        while(start<=end){
            int mid=start+(end-start)/2;
            if(is_valid(position, mid, m)){
                ans=mid;
                start=mid+1;
            }
            else
            end=mid-1;

        }
        return ans;
    }
};