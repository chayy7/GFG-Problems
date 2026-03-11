class Solution {
  public:
    int func(int n, int target, vector<int>& arr, vector<vector<int>>& dp){
        if(n == 0){
            if(target == 0 && arr[0] == 0) return 2;
            if(target == 0 || target == arr[0]) return 1;
            return 0;
        }
        if(dp[n][target] != -1 ) return dp[n][target];
        
        int p=0;
        if(arr[n] <= target){
            p = func(n-1, target-arr[n], arr, dp);
        }
        int np= func(n-1, target, arr, dp);
        
        return dp[n][target] = p+np;
    }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        vector<vector<int>> dp(n, vector<int>(target+1, -1));
        return func(n-1, target, arr, dp);
    
        
    }
};