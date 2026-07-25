class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        // code here
        int idx = -1;
        int n =arr.size();
        int l= 0, h = n-1;
        while(l <= h){
            int m= l+(h-l)/2;
            if(arr[m] == k){
                idx = m;
                h=m-1;
            }else if(arr[m] < k){
                l=m+1;
            }else{
                h=m-1;
            }
        }
        return idx;
    }
};