class Solution {
  public:
    void inorder(vector<int> &v, Node* root){
        if(root == nullptr) return;
        
        inorder(v,root->left);
        v.push_back(root->data);
        inorder(v,root->right);
    
    }
    bool search(Node* root, int key) {
        // code here
        vector<int> v;
        inorder(v,root);
        
        return find(v.begin(),v.end(), key)!= v.end() ? true:false;
        
    }
};