// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int cnt = int(log10(n))+1;
        
        int ans = 0;
        int o = n;
        while(o > 0){
            int rem = o % 10;
            ans += pow(rem,cnt);
            o /= 10;
            
        }
        
        return ans == n;
    }
};