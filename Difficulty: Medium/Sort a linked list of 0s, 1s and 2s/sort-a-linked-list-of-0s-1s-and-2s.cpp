/* Node is defined as
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
    Node* segregate(Node* head) {
        // code here
        vector<int> v;
        Node* temp=head;
        while(temp){
            v.push_back(temp->data);
            temp= temp->next;
        }
        
        int low= 0, mid = 0, high=v.size()-1;
        while(mid <= high){
            if(v[mid] == 0){
                swap(v[low], v[mid]);
                low++, mid++;
            }else if(v[mid] == 1){
                mid++;
            }else{
                swap(v[mid], v[high]);
                high--;
            }
        }
        
        int i=0;
        temp=head;
        while(temp){
            temp->data=v[i++];
            temp=temp->next;
        }
        return head;
    }
};