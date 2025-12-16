class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n=adj.size();
        int v[n]={0};
        
        v[0]=1;
        
        queue<int> q;
        q.push(0);
        
        
        vector<int> bfs;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            
            bfs.push_back(node);
            
            for(auto i:adj[node]){
                if(v[i] == 0){
                    v[i]=1;
                    q.push(i);
                }
            }
        }
        
        return bfs;

    }
};