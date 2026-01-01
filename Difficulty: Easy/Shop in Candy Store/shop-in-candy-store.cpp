class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        int n = prices.size();
        sort(prices.begin(), prices.end());

        int c = (n + k) / (k + 1);   // ✅ corrected

        int mini = 0;
        for(int i = 0; i < c; i++){
            mini += prices[i];
        }

        int maxi = 0;
        for(int i = n - 1; i >= n - c; i--){
            maxi += prices[i];
        }

        return {mini, maxi};
    }
};
