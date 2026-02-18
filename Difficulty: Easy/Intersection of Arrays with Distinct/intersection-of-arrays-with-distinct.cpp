class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        // code  here
        set<int> s(a.begin(), a.end());
        int cnt=0;
        for(auto i:b){
            if(s.count(i)){
                cnt++;
            }
        }
        return cnt;
    }
};