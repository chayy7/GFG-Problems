/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        vector<int> v;
        Node* temp=head;
        while(temp){
            v.push_back(temp->data);
            temp=temp->next;
        }
        
        int l=0, r=v.size()-1;
        while(l <=r ){
            swap(v[l], v[r]);
            l++, r--;
        }
        
        int i=0;
        temp=head;
        while(temp){
            temp->data = v[i++];
            temp=temp->next;
        }
        return head;
    }
};