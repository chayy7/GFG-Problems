class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int sum=0;
        int o=n;
        int len = log10(n)+1;
        while(n > 0){
            sum += pow(n%10, len);
            n /= 10;
        }
        return sum == o;
    }
};