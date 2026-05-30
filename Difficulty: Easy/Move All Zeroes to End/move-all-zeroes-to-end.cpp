class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int ptr =0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] != 0){
                arr[ptr] = arr[i];
                ptr++;
            }
        }
        
        while(ptr < arr.size()){
            arr[ptr] = 0;
            ptr++;
        }
    }
};