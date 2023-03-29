class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        for(;i<matrix.size();i++){
            if(matrix[i][0]>target){
                i--;
                break;
            }
        }
        if(i==matrix.size())return false;
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==target)return true;
        }
        return false;
    }
};
