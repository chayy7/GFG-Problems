class Solution {
  public:
    int leftElement(vector<int>& arr) {
        // Your code goes here
        sort(arr.begin(), arr.end());
        
        
        
        
        return arr[(arr.size()-1)/2];
        
       
    }
};