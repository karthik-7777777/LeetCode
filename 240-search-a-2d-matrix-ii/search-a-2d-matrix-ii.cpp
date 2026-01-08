class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat[0].size();
        int row=0,column=n-1;
        while(row<mat.size() && column>=0)
        {
            if(mat[row][column]==target)return true;
            else if(mat[row][column]>target)column--;
            else row++;
        }
        return false;
    }
};