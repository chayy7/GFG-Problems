// User function Template for C++

class Solution {
  public:
    void Addition(vector<vector<int>>& A, vector<vector<int>>& B) {
        // Code here
        int n=A.size();
        int m=A[0].size();
        
        // vector<vector<int>> v(n, vector<int>(m));
        for(int i= 0;i<n;i++){
            for(int j= 0;j<m;j++){
                A[i][j] = A[i][j] + B[i][j];
            }
        }
        
        // return v;
    }
};