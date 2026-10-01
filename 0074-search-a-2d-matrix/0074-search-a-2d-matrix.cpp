class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int start = 0;
        int end = m - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (matrix[mid][0] <= target && target <= matrix[mid][n - 1]) {
                int left = 0;
                int right = n - 1;

                while (left <= right) {
                    int col = left + (right - left) / 2;

                    if (matrix[mid][col] == target) {
                        return true;
                    }
                    else if (matrix[mid][col] < target) {
                        left = col + 1;
                    }
                    else {
                        right = col - 1;
                    }
                }

                return false;
            }
            else if (target > matrix[mid][n - 1]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return false;
    }
};