class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        map<int,int> mpp;
        for(auto i:arr){
            mpp[i]++;
        }
        
        int c=-1;
        for(auto i:mpp){
            if(i.second > arr.size()/2){
                c = i.first;
            }
        }
        
        return c;
    }
};