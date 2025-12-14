// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int> s;
        for(int i=0;i<arr.size();i++){
            if(s.empty()){
                s.push(arr[i]);
            }else if(arr[i] >= 0){
                if(s.top() >= 0){
                    s.push(arr[i]);
                }else{
                    s.pop();
                }
            }else{
                if(s.top() < 0){
                    s.push(arr[i]);
                }else{
                    s.pop();
                }
            }
            
            
        }
        vector<int> v;
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};