class Solution {
  public:
    int func(int n, vector<int>& height,vector<int>& dp){
        if(n == 0){
            
            dp[n] = 0;
            return 0;
        }
        
        if(dp[n] != -1) return dp[n];
        int one = abs(height[n]-height[n-1]) + func(n-1,height, dp);
        
        int two = INT_MAX;
        if(n>1) two = abs(height[n]-height[n-2]) + func(n-2,height, dp);
        
        return dp[n] = min(one,two);
    }
    int minCost(vector<int>& height) {
        // Code here
        int n= height.size();
        int sum = 0;
        vector<int> dp(n+1, -1);
        return func(n-1, height, dp);
        
        
    }
};