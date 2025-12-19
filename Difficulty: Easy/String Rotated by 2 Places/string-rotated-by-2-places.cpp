class Solution {
  public:
    void lror(string& lr){
        reverse(lr.begin(),lr.end()-1);
        reverse(lr.end()-1,lr.end());
        reverse(lr.begin(),lr.end());
    }
    void rror(string& rr){
        reverse(rr.begin(),rr.begin()+1);
        reverse(rr.begin()+1,rr.end());
        reverse(rr.begin(),rr.end());
    }
    bool isRotated(string& s1, string& s2) {
        // code here
        string lr = s1;
        string rr = s1;
        
        lror(lr);
        lror(lr);
        // cout << lr << " ";
        if(lr == s2){
            return 1;
        }
        rror(rr);
        rror(rr);
        // cout << rr << " ";
        if(rr == s2){
            return 1;
        }
        
        return 0;
        
        
    }
};
