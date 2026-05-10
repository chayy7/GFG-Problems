class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        int a = 1;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == a){
                a++;
            }
        }
        
        return a;
    }
};