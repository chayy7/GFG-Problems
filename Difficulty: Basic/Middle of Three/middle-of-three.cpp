// User function template for C++

class Solution {
  public:
    int middle(int a, int b, int c) {
        // code here
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        return v[1];
    }
};