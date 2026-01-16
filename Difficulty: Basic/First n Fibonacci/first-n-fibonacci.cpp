// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    int fib(int n, vector<int>& dp){
        if(n <= 1) return n;
        
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = fib(n-1,dp)+fib(n-2,dp);
    }
    vector<int> fibonacciNumbers(int n) {
        // code here
        
        vector<int> dp(n+1,-1);
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(fib(i, dp));
        }
        
        return ans;
    }
};