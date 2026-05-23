class Node{
    public:
    Node* children[26];
    bool eow;
    
    Node(){
        for(int i=0;i<26;i++){
            children[i]= nullptr;
        }
        eow = false;
    }
};

void insert(string s, Node* root, int &cnt){
        for(int j=0;j<s.size();j++){
            int idx= s[j] - 'a';
            if(root->children[idx] == nullptr){
                root->children[idx] = new Node();
                cnt++;
            }
            root = root->children[idx];
        }
        root->eow = true;
}

class Solution {
  public:
    int countSubs(string& s) {
        // code here
        
        Node* root = new Node();
        
        vector<string> v;
        for(int i=0;i<s.size();i++){
            v.push_back(s.substr(i));
        }
        
        int cnt = 0;
        for(auto i:v){
            insert(i, root, cnt);
        }
        
        
        
        
        
        return cnt;
    }
};