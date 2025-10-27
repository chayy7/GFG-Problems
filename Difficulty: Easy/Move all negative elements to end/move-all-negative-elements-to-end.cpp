class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        
        vector<int> pos;
        vector<int> neg;
        for(auto i:arr){
            if(i < 0){
                neg.push_back(i);
            }else{
                pos.push_back(i);
                
            }
        }
        
        int idx = 0;
        for(int i = 0;i<pos.size();i++){
            arr[idx] = pos[i];
            idx++;
        }
        for(int i = 0;i<neg.size();i++){
            arr[idx] = neg[i];
            idx++;
        }
    }
};