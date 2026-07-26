class Solution {
  public:
    int commDiv(int a, int b) {
        // code here
        int gcd = __gcd(a,b);
        
        int cnt = 0;
        for(int i=1;i*i<=gcd;i++){
            if(gcd% i == 0){
                cnt++;
                if(gcd/i != i){
                    cnt++;
                }
            }
            
        }
        return cnt;
    }
};