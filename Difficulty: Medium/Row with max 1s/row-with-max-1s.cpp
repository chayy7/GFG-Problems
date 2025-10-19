// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n= arr.size();
        map<int,int> mpp;
        for(int i = 0;i<n;i++){
            int cnt = 0;
            for(int j = 0;j<arr[i].size();j++){
                if(arr[i][j] == 1){
                    cnt += 1;
                    
                }
            }
            mpp[i] = cnt;
        }
        
        int ans = -1;
        int lar=-1;
        for(auto i:mpp){
            if(i.second > lar){
                ans = i.first;
                lar = i.second;
            }
        }
        
        return ans;
    }
};