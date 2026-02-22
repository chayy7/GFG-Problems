class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int l=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i] > l) l=arr[i];
        }
        return l;
    }
};
