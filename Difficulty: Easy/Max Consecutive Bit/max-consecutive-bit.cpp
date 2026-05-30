class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int maxi = 1;
        int cnt = 1;
        for(int i=1;i<arr.size();i++){
            if(arr[i-1] == arr[i]){
                cnt++;
                maxi = max(maxi, cnt);
            }else{
                cnt = 1;
            }
        }
        return maxi;
    }
};