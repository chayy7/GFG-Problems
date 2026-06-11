/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        Node* newNode = new Node(val);
        
        if(pos == 1){
            Node* tempp = newNode;
            newNode->next= head;
            head = tempp;
            return head;
        }
        
        
        Node* temp= head;
        pos-=2;
        while(pos){
            temp=temp->next;
            pos--;
        }
        
        newNode->next= temp->next;
        temp->next= newNode;
        
        
        return head;
        
    }
};