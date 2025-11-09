class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        int n = arr.size();
        double avg = 0;
        if(n%2 == 0){
            avg += (arr[n/2]+arr[n/2-1])/2.0;
        }else{
            avg += arr[n/2];
        }
        
        return avg;
    }
};