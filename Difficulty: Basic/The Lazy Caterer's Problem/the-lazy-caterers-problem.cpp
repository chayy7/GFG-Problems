class Solution {
  public:
    int maxCuts(int n) {
        // code here
        int c = (n*(n+1)/2);
        return c+1;
    }
};