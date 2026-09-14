class Solution {
  public:
  
    void dfs(int start,map<int, vector<int>>& mpp, vector<int>& vis, stack<int>& st){
        vis[start] = 1;
        
        for(auto i:mpp[start]){
            if(!vis[i]){
                vis[i] = 1;
                dfs(i, mpp, vis, st);
            }
        }
        st.push(start);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        map<int, vector<int>> mpp;
        for(auto i: edges){
            mpp[i[0]].push_back(i[1]);
        }
        
        
        vector<int> vis(V, 0);
        
        
        stack<int> st;
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i, mpp, vis, st);
            }
        }
        
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top()); st.pop();
        }
        
        return ans;
    }
};