class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        // code here
        vector<int> v;
        
        int n = arr.size();
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum += arr[i];
            v.push_back(sum);
        }
        
        return v;
    }
};