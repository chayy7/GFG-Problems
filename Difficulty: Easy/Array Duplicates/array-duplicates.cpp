class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        map<int,int> mpp;
        for(auto i:arr){
            mpp[i]++;
        }
        
        vector<int> v;
        for(auto i:mpp){
            if(i.second == 2) v.push_back(i.first);
        }
        
        return v;
    }
};