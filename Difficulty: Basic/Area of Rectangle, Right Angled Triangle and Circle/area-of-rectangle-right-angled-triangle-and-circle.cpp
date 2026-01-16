class Solution {
  public:
    vector<int> getAreas(int L, int W, int B, int H, int R) {
        // code here
        return {L*W, 0.5*B*H, 3.14*R*R};
    }
};