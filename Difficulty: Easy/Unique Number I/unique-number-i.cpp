class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int xorr = 0;
        for(auto i:arr){
            xorr ^= i;
        }
        return xorr;
    }
};