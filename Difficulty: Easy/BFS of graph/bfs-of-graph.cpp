class Solution {
public:
    vector<int> bfs(vector<vector<int>> &adj) {
        int n = adj.size();
        vector<int> vis(n, 0);

        queue<int> q;
        q.push(0);
        vis[0] = 1;

        vector<int> bfs;
        while (!q.empty()) {
            int node = q.front();
            q.pop();

            bfs.push_back(node);

            for (auto i : adj[node]) {
                if (!vis[i]) {
                    vis[i] = 1;
                    q.push(i);
                }
            }
        }
        return bfs;
    }
};
