class Solution {
  public:
    int countDigits(int n) {
        // code here
        return int(log10(n))+1;
    }
};