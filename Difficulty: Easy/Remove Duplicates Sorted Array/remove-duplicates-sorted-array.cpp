class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        
        if(arr.size() <= 1) return arr;
        int ptr1=0, ptr2=1;
        while(ptr2 < arr.size()){
            if(arr[ptr1] == arr[ptr2]){
                ptr2++;
            }else{
                ptr1++;
                arr[ptr1] =arr[ptr2]; 
            }
        }
        
        vector<int> ans;
        for(int i=0;i<=ptr1;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};