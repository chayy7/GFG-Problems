class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int zeroes_cnt=0;
        for(auto i:arr){
            if(i == 0) zeroes_cnt++;
        }
        
        
        vector<int> ans;
        
        for(auto i:arr){
            if(i != 0) ans.push_back(i);
        }
        
        while(zeroes_cnt != 0){
            ans.push_back(0);
            zeroes_cnt--;
        }
        arr=ans;
        // return ans;
    }
};