class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();
        int r=0;
        int c=m-1;
        while(r<n && c>=0){
            if(target==mat[r][c]){
                return true;
            }
            if(target<mat[r][c]){
                c--;
            }
            else{
                r++;
            }
        }
        return false;
    }
};