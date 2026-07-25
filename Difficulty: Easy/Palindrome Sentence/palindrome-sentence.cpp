class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        string c ="";
        for(auto i:s){
            if(isalnum(i)){
                c += tolower(i);
            }
        }
        
        string d = c;
        reverse(d.begin(), d.end());
        return c == d;
    }
};