class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        vector<int> v;
        for(auto i:mat){
            for(auto j:i){
                v.push_back(j);
            }
        }
        sort(v.begin(),v.end());
        // for(auto i:v){
        //     cout << i << " ";
        // }
        return v[v.size()/2];
    }
};
