/* Structure for Link list node
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
class Solution {
  public:
    Node* deleteK(Node* head, int K) {
        int cnt = 0;
        Node* temp = head;
        Node* prev = NULL;
        
        while(temp){
            cnt++;
            if(cnt % K == 0){
                prev->next = temp->next;
            }
            
            prev=  temp;
            temp=temp->next;
        }
        
        return head;
    }
};