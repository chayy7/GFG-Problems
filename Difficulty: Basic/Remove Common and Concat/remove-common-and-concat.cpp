class Solution {
  public:
    string concatenatedString(string s1, string s2) {
        //  code here
        map<char,int> mpp1;
        for(auto i:s1) mpp1[i]++;
        map<char,int> mpp2;
        for(auto i:s2) mpp2[i]++;
        
        string ans = "";
        for(int i=0;i<s1.size();i++){
            if(mpp1[s1[i]] >= 1 && mpp2[s1[i]] >= 1){
                
            }else{
                ans += s1[i];
            }
        }
        for(int i=0;i<s2.size();i++){
            if(mpp1[s2[i]] >= 1 && mpp2[s2[i]] >= 1){
                
            }else{
                ans += s2[i];
            }
        }
        
        return ans == "" ? "-1" : ans;
    }
};