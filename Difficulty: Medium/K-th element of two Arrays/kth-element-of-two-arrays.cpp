class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        vector<int> v;
        for(auto i:a){
            v.push_back(i);
        }
        for(auto i:b){
            v.push_back(i);
        }
        sort(v.begin(),v.end());
        return v[k-1];
    }
};