class Solution {
  public:
    string modify(string& s) {
        // code here.
        
        stringstream ss(s);
        
        string ans = "";
        string word;
        while(ss >> word){
            ans += word;
        }
        
        return ans;
    }
};