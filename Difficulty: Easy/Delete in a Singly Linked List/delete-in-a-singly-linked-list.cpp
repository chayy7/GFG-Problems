/*
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        
        if(head == nullptr) return nullptr;
        if(x == 1){
            head = head->next;
            return head;
        }
        
        // code here
        Node* temp = head;
        Node* prev = nullptr;
        int cnt = 0;
        x--;
        while(x){
            prev = temp;
            temp=temp->next;
            x--;
        }
        
        prev->next = temp->next;
        return head;
    }
};