class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        
        int l=0, r= n-1;
        while(l <= r){
            int mid = (l+r)/2;
            if(arr[mid] <= x){
                l = mid+1;
            }else if(arr[mid] > x){
                r=mid-1;
            }
        }
        return r;
    }
};
