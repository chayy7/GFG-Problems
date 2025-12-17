// User function Template for C++

class Solution {
  public:
    void inorder(Node* root, vector<int>& v){
        if(root == nullptr) return ;
        
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int countNodes(Node* root) {
        // Write your code here
        vector<int> v;
        inorder(root,v);
        
        return v.size();
    }
};