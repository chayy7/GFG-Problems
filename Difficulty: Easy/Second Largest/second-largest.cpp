class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        set<int> s;
        for(auto i:arr) s.insert(i);
        
        vector<int> v;
        
        for(auto i:s) v.push_back(i);
        if(v.size() < 2) return -1;
        
        return v[v.size()-2];
    }
};