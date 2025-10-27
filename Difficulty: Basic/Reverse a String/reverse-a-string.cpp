// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        string c = "";
        for(int i = s.size()-1;i>=0;i--){
            c += s[i];
        }
        
        return c;
    }
};
