/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        vector<int> v;
        Node* temp=head;
        while(temp){
            v.push_back(temp->data);
            temp= temp->next;
        }
        
        for(int i=0;i< v.size();i+=k){
            reverse(v.begin()+i, v.begin()+min(i+k,(int)v.size()) );
        }
        
        temp=head;
        int i=0;
        while(temp){
            temp->data = v[i++];
            temp=temp->next;
        }
        return head;
    }
};