class Solution {
  public:
    int leftElement(vector<int>& arr) {
        // code here
        sort(arr.begin() , arr.end());
        
        return arr[(arr.size()-1)/2];
    }
};