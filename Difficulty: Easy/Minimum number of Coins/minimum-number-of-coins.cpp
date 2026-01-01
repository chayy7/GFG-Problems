class Solution {
  public:
    int findMin(int n) {
        // code here
        int cnt = 0;
        while(n > 0){
            if(n / 10 != 0){
                int t  =n/10;
                cnt += t;
                n = n - t * 10;
            }else if(n / 5 != 0){
                int t  =n/5;
                cnt += t;
                // n = n / 5;
                n = n - t * 5;
            }else if(n / 2 != 0){
                int t  =n/2;
                cnt += t;
                // n = n / 2;
                n = n - t * 2;
            }else if(n / 1 != 0){
                int t  =n/1;
                cnt += t;
                // n = n / 1;
                n = n - t * 1;
            }
        }
        
        return cnt;
    }
    
    
};