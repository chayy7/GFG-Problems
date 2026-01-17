// User function Template for C++

class Solution {
  public:
    int isPerfect(int N) {
        // code here
        int org= N;
        int ans = 0;
        while(N > 0){
            int rem = N%10;

            int fact = 1;
            for (int i = 1; i <= rem; i++) {
                fact *= i;
            }

            ans += fact;
            N /= 10;
        }
        
        return ans == org;
        
    }
};