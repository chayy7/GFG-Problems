
class Solution {
  public:
    vector<int> topView(Node *root) {
        if(!root) return {};
        
        queue<pair<Node*,pair<int,int>>> q;
        q.push({root, {0,0}});
        
        map<int,map<int, vector<int>>> mpp;
        while(!q.empty()){
            auto front = q.front();
            q.pop();
            
            
            auto currNode = front.first;
            auto vtl = front.second.first;
            auto lvl = front.second.second;
            
            mpp[vtl][lvl].push_back(currNode->data);
            
            if(currNode->left){
                q.push({currNode->left,{vtl-1, lvl+1}});
            }
            if(currNode->right){
                
                q.push({currNode->right,{vtl+1, lvl+1}});
            }
            
            
        }
        
        vector<vector<int>>v;
        for(auto i:mpp){
            vector<int> lvl;
            for(auto j:i.second){
                for(auto k: j.second){
                    lvl.push_back(k);
                }
            }
            v.push_back(lvl);
        }
        
        
        vector<int> ans;
        for(auto i:v){
            ans.push_back(i[0]);
        }
        
        return ans;
        
    }
};