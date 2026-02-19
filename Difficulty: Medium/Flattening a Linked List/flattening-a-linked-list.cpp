/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node *flatten(Node *root) {
        // code here
        
        vector<int> v;
        Node* temp=root;
        while(temp){
            Node* lvl= temp;
            while(lvl){
                v.push_back(lvl->data);
                lvl = lvl->bottom;
            }
            temp=temp->next;
        }
        sort(v.begin(), v.end());
        
        Node* newll= new Node(v[0]);
        Node* curr= newll;
        for(int i=1;i<v.size();i++){
            curr->bottom= new Node(v[i]);
            curr= curr->bottom;
        }
        
        return newll;
        
    }
};