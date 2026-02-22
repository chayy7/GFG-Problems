class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int l=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i] > l) l=arr[i];
        }
        int sl =-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i] > sl && arr[i] != l) sl=arr[i];
        }
        
        return sl;
    }
};