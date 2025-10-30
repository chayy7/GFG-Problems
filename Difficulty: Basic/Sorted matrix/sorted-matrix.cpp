// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> mat) {
        // code here
        vector<int> v;
        for(auto i:mat){
            for(auto j:i){
                v.push_back(j);
            }
        }
        sort(v.begin(),v.end());
        int idx = 0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                mat[i][j] = v[idx++];
            }
        }
        
        return mat;
    }
};