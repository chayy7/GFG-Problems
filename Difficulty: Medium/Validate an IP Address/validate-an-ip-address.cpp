class Solution {
  public:
    int isValid(string &s) {
        // code here
        stringstream ss(s);
        string word;
        int cnt =0;
        while(getline(ss, word, '.')){
            if(word.empty()) return false;
            if(word.size() > 1 && word[0] == '0') return false;
            if(stoi(word) < 0 || stoi(word) > 255) return false;
            
            if(!word.empty()) cnt++;
        }
        
        return cnt==4;
    }
};