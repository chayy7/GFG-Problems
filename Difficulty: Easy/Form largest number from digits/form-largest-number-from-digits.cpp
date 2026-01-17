class Solution {
  public:
    string MaxNumber(vector<int>& arr) {
        // code here.
        
        sort(arr.rbegin(), arr.rend());
        
        string ans="";
        for(auto i:arr){
            ans += char('0' + i);
        }
        return ans;
    }
};