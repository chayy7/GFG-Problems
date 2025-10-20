class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<bool> vstd(n,0);
        
        vector<int> ans;
        stack<int> s;
        s.push(0);
        
        while(!s.empty()){
            int top = s.top();
            s.pop();
            
            if(!vstd[top]){
                ans.push_back(top);
                vstd[top] = 1;
            }
            
            for(int i = adj[top].size()-1;i>=0;i--){
                
                if(!vstd[adj[top][i]]){
                    s.push(adj[top][i]);
                }
            }
        }
        
        
        return ans;
    }
};