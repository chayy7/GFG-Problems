// User function Template for C++
class Solution {
  public:
    long long int commDiv(long long int a, long long int b) {
        // code here
        long long cnt=0;
        for(int i = 1;i<=max(a,b);i++){
            if(a% i == 0 && b%i == 0){
                cnt++;
            }
        }
        
        return cnt;
    }
};