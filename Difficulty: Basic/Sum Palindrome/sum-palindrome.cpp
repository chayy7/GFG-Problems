class Solution {
  public:
    int reve(int n){
        int rev = 0;
        while(n > 0){
            int rem = n%10;
            rev = rev*10+rem;
            n /= 10;
        }
        return rev;
    }
    
    bool pal(int n){
        int rev = reve(n);
        return n == rev;
    }
    int isSumPalindrome(int n) {
        // code here
        if(pal(n)) return n;
        int revN = reve(n);
        int sum = n+revN;
        
        
        int cnt = 1;
        while(!pal(sum) && cnt < 5){
            sum += reve(sum);
            
            cnt++;
        }
        
        if(cnt > 5) return -1;
        if(!pal(sum)) return -1;
        
        
        
        return sum;
    }
};