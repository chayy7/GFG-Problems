

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
    int palPrimes(int n) {
        // code here
        int cnt = 0;
        for(int i=1;i<=n;i++){
            string s = to_string(i);
            reverse(s.begin(), s.end());
            if(isprime(i) && s == to_string(i)){
                cnt++;
            }
        }
        return cnt;
    }
};