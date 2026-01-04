class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        vector<int> ans;
        
        queue<int> q;
        q.push(0);
        int n = adj.size();
        
        vector<int>v (n,0);
        v[0] = 1;
        while(!q.empty()){
            int front = q.front();
            ans.push_back(front);
            q.pop();
            
            for(auto i:adj[front]){
                if(v[i] == 0){
                    v[i] = 1;
                    q.push(i);
                    
                }
            }
        }
        return ans;
    }
};