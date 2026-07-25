class Solution {
  public:
    int decimalEquivalent(string &s, int b) {
        // code here
        
        int ans = 0;
        for(auto i:s){
            if(isdigit(i)){
                ans = ans*b +(i-'0');
            }else{
                
                ans = ans*b +(i-'A'+10);
            }
        }
        
        return ans;
    }
};