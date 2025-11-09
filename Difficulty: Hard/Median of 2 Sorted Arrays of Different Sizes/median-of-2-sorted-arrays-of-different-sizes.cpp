class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> arr;
        for(auto i:a){
            arr.push_back(i);
        }
        for(auto i:b){
            arr.push_back(i);
        }
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