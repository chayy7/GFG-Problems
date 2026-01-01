// User function Template for C++

class Solution {
  public:
    int rotationCount(long long R, long long D) {
        // code here
        int cnt = 0;
        while(R > 0 && D > 0){
            int rem = R%10;
            int rem1 = D%10;
            
            cnt += min(abs(rem-rem1),10-abs(rem-rem1));
            
            
            R/= 10;
            D /= 10;
        }
        
        return cnt;
    }
};