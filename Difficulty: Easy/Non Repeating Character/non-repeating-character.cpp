
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        map<char,int> mpp;
        for(auto i:s){
            mpp[i]++;
        }
        
        for(auto i: s){
            if(mpp[i] == 1) return i;
        }
        
        return '$';
    }
};