class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        map<int, vector<int>> mpp;
        vector<int> indegree(V);
        
        for(auto i:edges){
            mpp[i[0]].push_back(i[1]);
            indegree[i[1]]++;
        }
        
        queue<int> q;
        
        for(int i=0;i<V;i++){
            if(indegree[i] == 0) q.push(i);
        }
        
        vector<int> ans;
        while(!q.empty()){
            auto front = q.front(); q.pop();
            ans.push_back(front);
            
            
            for(auto i:mpp[front]){
                indegree[i]--;
                if(indegree[i] == 0){
                    q.push(i);
                }
            }
            
        }
        
        if(ans.size() == V) return false;
        
        
        return true;
        
    }
};