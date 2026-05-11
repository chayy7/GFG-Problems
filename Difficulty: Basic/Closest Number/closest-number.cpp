class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        int n1=abs(n);
        int m1=abs(m);
        int c = n1/m1;
        int c1 = n1/m1 + 1;
        int d = c*m1;
        int d1 = c1*m1;
        
        int diff = abs(n1-d);
        int diff1 = abs(n1-d1);
        
        int maxi = 0;
        if(diff < diff1){
            maxi = d;
        }else if(diff > diff1){
            maxi = d1;
        }else{
            maxi = max(d,d1);
        }
        
        return n<0? -maxi : maxi;
        
    }
};