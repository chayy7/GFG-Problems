class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        map<int,int> mpp;
        for(auto i:arr){
            mpp[i]++;
        }
        
        for(auto i:mpp){
            if(i.first == target) return i.second;
        }
        
        return 0;
    }
};
