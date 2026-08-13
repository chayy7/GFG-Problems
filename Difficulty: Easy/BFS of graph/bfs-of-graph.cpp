class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        map<int, vector<int>> mpp;
        for(int i=0;i<adj.size();i++){
            for(int j=0;j<adj[i].size();j++){
                mpp[i].push_back(adj[i][j]);
                // mpp[adj[i][j]].push_back(i);
            }
        }
        
        // for(auto i:mpp){
        //     cout << i.first << "->";
        //     for(auto j:i.second){
        //         cout << j << " ";
                
        //     }
        //     cout << endl;
        // }
        
        int start = 0;
        
        map<int, bool> visited;
        visited[start] = true;
        
        
        queue<int> q;
        q.push(start);
        
        
        
        vector<int> ans;
        
        
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            
            
            ans.push_back(node);
            
            for(auto i:mpp[node]){
                if(!visited[i]){
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        
        
        
        return ans;
        
    }
};