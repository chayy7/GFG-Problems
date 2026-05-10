class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        if(arr.size() < 1)return 1;
        int maxi = 1;
        int cnt = 1;
        for(int i=1;i<=arr.size()-1;i++){
            if(arr[i] != arr[i-1]){
                maxi = max(maxi,cnt);
                cnt=1;
            }else{
                cnt++;
                maxi = max(maxi,cnt);
            }
        }
        return maxi;
    }
};