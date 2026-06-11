/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
Node *deleteAtPosition(Node *head, int pos) {
    
    if(head == nullptr || head->next == nullptr) return nullptr;
    if(pos == 1){
        head=head->next;
        return head;
    }
    // if(head->next )
    // code here
    int cnt = 0;
    Node* temp = head;
    Node* prev=  NULL;
    
    
    while(temp){
        cnt++;
        if(cnt == pos){
            prev->next = temp->next;
        }
        prev= temp;
        temp=temp->next;
    }
    return head;
}