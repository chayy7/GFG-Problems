class Solution {
  public:
    string reverseWords(string &s) {
        string ans = "";
        string temp = "";
        int n = s.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '.') {
                if (!temp.empty()) {   // ⭐ FIX
                    reverse(temp.begin(), temp.end());
                    if (!ans.empty()) ans += '.'; // ⭐ FIX
                    ans += temp;
                    temp = "";
                }
            } else {
                temp.push_back(s[i]);
            }
        }
        
        // last word (if exists)
        if (!temp.empty()) {
            reverse(temp.begin(), temp.end());
            if (!ans.empty()) ans += '.';
            ans += temp;
        }
        
        return ans;
    }
};
