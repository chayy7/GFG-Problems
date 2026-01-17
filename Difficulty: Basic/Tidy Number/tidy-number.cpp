// User function template for C++

class Solution {
  public:
    int isTidy(int N) {
        // code here
        string s = to_string(N);
        sort(s.begin(), s.end());
        
        int c = stoi(s);
        return N==c;
        
    }
};