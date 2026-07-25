class Solution {
  public:
    bool identicalMat(vector<vector<int>> mat1, vector<vector<int>> mat2) {
        // code here
        for(int i=0;i<mat1.size();i++){
            for(int j=0;j<mat1.size();j++){
                if(mat1[i][j] != mat2[i][j]) return false;
            }
        }
        return true;
    }
};