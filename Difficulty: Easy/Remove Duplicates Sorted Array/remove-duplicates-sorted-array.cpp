class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        set<int> s(arr.begin(), arr.end());
        vector<int> ans(s.begin(), s.end());
        
        return ans;
    }
};