// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
        // Your code goes here
        
        string ans = "";
        for(auto i:s){
            if(!(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')){
                ans += i;
            }
        }
        
        return ans;
    }
};