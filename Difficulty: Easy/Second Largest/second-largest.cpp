class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maxi = INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i] > maxi) maxi=arr[i];
        }
        int second_maxi = INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i] != maxi and arr[i] > second_maxi) second_maxi=arr[i];
        }
        
        return second_maxi == INT_MIN ? -1 : second_maxi;
    }
};