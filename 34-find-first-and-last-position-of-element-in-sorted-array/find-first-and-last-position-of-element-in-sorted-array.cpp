class Solution {
public:
int find_left(vector<int>& nums, int target){

    int n = nums.size();

    int s=0;
    int e=n-1;
    int an = -1;
    while(s <= e){
        int mid=s+(e-s)/2;
        if(target == nums[mid]){
            an = mid;
            e = mid - 1;
        }
        else if(target > nums[mid]){
            s=mid+1;
        }
        else{
            e=mid - 1;
        }
        
    }
    return an;
}

int find_right(vector<int>& nums, int target){
    int n = nums.size();
    int s=0;
    int e=n-1;
    int an=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(target == nums[mid]){
            an = mid;
            s = mid + 1;
        }
        else if(target<nums[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return an;
}

    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int>ans(2);

        ans[0]= find_left(nums,target);
        ans[1]= find_right(nums,target);

        return ans;
    }
};