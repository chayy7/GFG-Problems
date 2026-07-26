class Solution {
  public:
    string lr(string s1){
        reverse(s1.begin(), s1.begin()+2);
        reverse(s1.begin()+2, s1.end());
        reverse(s1.begin(), s1.end());
        
        return s1;
    }
    string rr(string s1){
        reverse(s1.begin(), s1.end()-2);
        reverse(s1.end()-2, s1.end());
        reverse(s1.begin(), s1.end());
        
        return s1;
    }
    bool isRotated(string& s1, string& s2) {
        // code here
        if(s1.size() <= 1 || s2.size() <= 1) return false;
        
        string a = lr(s1);
        string b = rr(s1);
        
        return a == s2 || b == s2;
    }
};
