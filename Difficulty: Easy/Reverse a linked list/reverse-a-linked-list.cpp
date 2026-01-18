/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        vector<int> v;
        Node* temp = head;
        while(temp){
            v.push_back(temp->data);
            temp = temp->next;
        }
        
        reverse(v.begin(),v.end());
        temp= head;
        int i= 0;
        while(temp){
            temp->data= v[i++];
            temp=temp->next;
        }
        
        return head;
        
    }
};