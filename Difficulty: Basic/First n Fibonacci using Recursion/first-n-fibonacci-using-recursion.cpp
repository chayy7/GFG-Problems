class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    int func(vector<int>& dp, int n){
        if(n<= 1){
            // dp[n] = n;
            return n;
            
        }
        
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = func(dp, n-1)+ func(dp, n-2);
    }
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> dp(n+1, -1);
        
        vector<int> arr;
        for(int i=0;i<n;i++){
            arr.push_back(func(dp, i));
        }
        
        return arr;
    }
};