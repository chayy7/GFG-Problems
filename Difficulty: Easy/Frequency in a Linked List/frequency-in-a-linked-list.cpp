/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution {
  public:
    int count(struct Node* head, int key) {
        
        Node* temp= head;
        map<int,int> mpp;
        while(temp){
            mpp[temp->data]++;
            temp=temp->next;
        }
        return mpp[key];
    }
};