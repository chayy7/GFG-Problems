class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        int n = a.size();
        sort(a.begin(), a.end());

        int mini = INT_MAX;

        for (int i = 0; i <= n - m; i++) {
            int mn = a[i];
            int mx = a[i + m - 1];
            mini = min(mini, mx - mn);
        }

        return mini;
    }
};
