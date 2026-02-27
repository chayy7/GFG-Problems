class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        
        vector<int> ans;
        int n=adj.size();
        
        vector<int> vis(n, false);
        queue<int> q;
        q.push(0);
        vis[0] = true;
        
        while(!q.empty()){
            int front = q.front(); q.pop();
            ans.push_back(front);
            for(auto i:adj[front]){
                if(!vis[i]){
                    vis[i] = true;
                    q.push(i);
                }
            }
        }
        
        return ans;
    }
};