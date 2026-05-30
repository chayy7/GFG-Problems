class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int i=0, j = 1;
        while(j < arr.size()){
            if(arr[i] != arr[j]){
                arr[i+1] = arr[j];
                i++;
            }
            j++;
        }
        return vector<int>(arr.begin(), arr.begin()+i+1);
    }
};