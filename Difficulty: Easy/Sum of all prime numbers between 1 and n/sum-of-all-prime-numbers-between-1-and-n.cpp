// User function Template for C++

class Solution {
  public:
    bool isprime(int n){
        if(n <= 1) return false;
        if(n == 2) return true;
        if(n % 2 == 0) return false;
        
        for(int i= 3;i*i<= n;i+=2){
            if(n%i == 0) return false;
        }
        
        return true;
    }
    int prime_Sum(int n) {
        // Code here
        
        int sum= 0;
        for(int i=1;i<=n;i++){
            if(isprime(i)){
                sum += i;
            }
        }
        
        return sum;
        
    }
};