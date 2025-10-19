class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        
        vector<int> ans;
        queue<int> q;
        q.push(0);
        vector<int> vstd(n,0);
        vstd[0] = 1;
        // for(auto i: vstd){
        //     cout << i << " ";
        // }
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(int i = 0;i<adj[node].size();i++){
                if(!vstd[adj[node][i]]){
                    q.push(adj[node][i]);
                    vstd[adj[node][i]] = 1;
                }
            }
        }
        
        
        
      
        
        
        return ans;
    }
};