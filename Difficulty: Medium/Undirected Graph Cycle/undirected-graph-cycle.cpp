class Solution {
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        // adjacency list using map
        map<int, vector<int>> adj;
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> vis(V, 0);

        // check each component
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                queue<pair<int, int>> q;
                q.push({i, -1});
                vis[i] = 1;

                while (!q.empty()) {
                    int node = q.front().first;
                    int parent = q.front().second;
                    q.pop();
                    
                    for (int adjNode : adj[node]) {
                        if (!vis[adjNode]) {
                            vis[adjNode] = 1;
                            q.push({adjNode, node});
                        }
                        else if (vis[adjNode] && adjNode != parent) {
                            return true; // cycle detected
                        }
                    }
                }
            }
        }
        return false;
    }
};