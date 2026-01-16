class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        string ans = "";
        for(auto i:s){
            if(isalnum(i)){
                ans.push_back(tolower(i));
            }
        }
        
        // cout << ans << endl;
        string ans1(ans.begin(), ans.end());
        
        reverse(ans1.begin(), ans1.end());
        // cout << ans1 << endl;
        
        return ans == ans1;
        
    }
};