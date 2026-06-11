/* Structure of a linked list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* deleteAllOccurances(Node* head, int x) {
        // code here
        while(head && head->data == x){
            head= head->next;
        }
        Node* temp=head;
        Node* prev= nullptr;
        
        
        while(temp){
            if(temp->data == x){
                prev->next = temp->next; 
                temp= temp->next;
            }else{
                prev= temp;
                temp= temp->next;
            }
            
        }
        
        return head;
    }
};