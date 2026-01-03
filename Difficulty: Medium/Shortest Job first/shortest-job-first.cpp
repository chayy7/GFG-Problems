// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        // code here
        vector<int> v;
        int c = 0;
        sort(bt.begin(),bt.end());
        
        for(auto i:bt){
            v.push_back(c);
            c = i +c;
        }
        
        
        int s = 0;
        for(auto i:v){
            s += i;
        }
        
        return s/v.size();
        
    }
};