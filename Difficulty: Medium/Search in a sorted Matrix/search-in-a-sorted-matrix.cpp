class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        for(auto i:mat){
            for(auto j:i){
                if(j == x){
                    return true;
                }
            }
        }
        return false;
    }
};