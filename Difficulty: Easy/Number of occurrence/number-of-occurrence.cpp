class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        if(arr.empty()) return 0;
        int n=arr.size();
        
        int l=0, r=n-1;
        int lwr = -1;
        int upr=-1;
        while(l <= r){
            int mid=l+(r-l)/2;
            if(arr[mid] >= target){
                r = mid-1;
            }else if(arr[mid] < target){
                l = mid+1;
            }
        }
        if(arr[l] != target || l == n){
            return 0;
        }
        lwr = l;
        
        
        int l1=0, r1=n-1;
        
        while(l1 <= r1){
            int mid=l1+(r1-l1)/2;
            if(arr[mid] > target){
                r1 = mid-1;
            }else if(arr[mid] <= target){
                l1 = mid+1;
            }
        }
        
        upr = r1;
        
        return upr-lwr+1;
    }
};
