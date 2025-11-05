class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        map<int,int> mpp;
        for(auto i:arr){
            mpp[i]++;
        }
        
        int n= arr.size();
        int cnt = 0;
        for(auto i:mpp){
            if(i.second > (n/k)){
                cnt++;
            }
        }
        
        return cnt;
    }
};