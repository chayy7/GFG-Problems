class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        string org =s;
        reverse(s.begin() , s.end());
        
        return org == s;
    }
};