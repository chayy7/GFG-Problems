class Solution {
  public:
    int maxProfit(vector<int> &p) {
        // code here
        int mini = p[0];
        int maxi = 0;
        for(int i=1;i<p.size();i++){
            mini = min(mini, p[i]);
            maxi = max(maxi, abs(p[i]- mini));
        }
        
        return maxi;
        
        
    }
};
