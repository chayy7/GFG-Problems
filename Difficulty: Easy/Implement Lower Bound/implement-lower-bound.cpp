class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int l=0;
        int r=n-1;
        while(l <= r){
            int mid = (l+r)/2;
            if(arr[mid] >= target){
                r = mid-1;
            }else if(arr[mid] < target){
                l = mid+1;
            }
        }
        
        return l;
    }
};
