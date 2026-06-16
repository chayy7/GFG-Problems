/* Structure of binary tree node
class Node{
public:
    int data;
    Node* left, right;
    Node(int item)
    {
        data = item;
        left = nullptr;
        right = nullptr;
    }
}
*/
class Solution {
  public:
    vector<int> verticalSum(Node* root) {
        // code here
        if(!root) return {};
        
        map<int, map<int, vector<int>>> mpp;
        queue<pair<Node*,pair<int,int>>> q;
        
        q.push({root, {0,0}});
        
        while(!q.empty()){
            auto front = q.front(); q.pop();
            
            auto node= front.first;
            auto vtl= front.second.first;
            auto lvl= front.second.second;
            
            mpp[vtl][lvl].push_back(node->data);
            
            
            if(node->left) q.push({node->left, {vtl-1, lvl+1}});
            if(node->right) q.push({node->right, {vtl+1, lvl+1}});
        }
        vector<int> v;
        for(auto i:mpp){
            int sum = 0;
            for(auto j:i.second){
                for(auto k:j.second){
                    sum += k;
                }
            }
            v.push_back(sum);
        }
        
        return v;
    }
};