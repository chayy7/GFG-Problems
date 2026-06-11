class Solution {
  public:
    Node* removeLastNode(Node* head) {
        if(head == NULL) return NULL;

        if(head->next == NULL){
            delete head;
            return NULL;
        }

        Node* temp = head;
        Node* prev = NULL;

        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }

        delete temp;
        prev->next = NULL;

        return head;
    }
};