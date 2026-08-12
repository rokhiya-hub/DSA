class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int s = 0;
        int e = n - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (matrix[mid][0] > target) {
                e = mid - 1;
            }
            else if (matrix[mid][m - 1] < target) {
                s = mid + 1;
            }
            else {
                int low = 0;
                int high = m - 1;
                while (low <= high) {
                    int mid2 = low + (high - low) / 2;
                    if (matrix[mid][mid2] == target)
                        return true;
                    else if (matrix[mid][mid2] > target)
                        high = mid2 - 1;
                    else
                        low = mid2 + 1;
                }
                return false;
            }
        }
        return false;
    }
};