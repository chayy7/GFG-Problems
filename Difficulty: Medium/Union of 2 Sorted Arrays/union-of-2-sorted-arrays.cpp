class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int> s(a.begin(), a.end());
        set<int> s1(b.begin(), b.end());
        set<int> v;
        for(auto i:s){
            v.insert(i);
        }
        for(auto i:s1){
            v.insert(i);
        }
        vector<int> ans(v.begin(), v.end());
        return ans;
    }
};