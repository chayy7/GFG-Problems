class Solution {
  public:
    int greatestOfThree(int a, int b, int c) {
        // code here
        return max(a,max(b,c));
    }
};