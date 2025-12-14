// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        stack<int> s;
        vector<int> v;
        int cnt = 0;
        for(int i=0;i<str.size();i++){
            if(str[i] == '('){
                cnt++;
                s.push(cnt);
                v.push_back(s.top());
                
            }else if(str[i] == ')'){
                v.push_back(s.top());
                s.pop();
            }
        }
        
        return v;
    }
};