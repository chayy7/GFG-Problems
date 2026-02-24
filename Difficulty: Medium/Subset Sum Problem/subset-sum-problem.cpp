class Solution {
  public:
    bool func(int n, int tempsum, int sum, vector<int>& arr, int idx, vector<vector<int>>& dp){
        if(sum == tempsum) return true;
        
        
        if(idx >= n || tempsum > sum) return false;
        
        
        if(dp[idx][tempsum] != -1) return dp[idx][tempsum];
        
        int pick = func(n, tempsum+arr[idx],sum, arr,idx+1, dp);
        int npick = func(n, tempsum,sum, arr,idx+1,dp);
        return dp[idx][tempsum] = pick || npick;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n=arr.size();
        vector<vector<int>> dp(n, vector<int>(sum+1, -1));
        int idx =0;
        return func(n,0, sum, arr, idx, dp);
    }
};