/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        string s="";
        Node* temp=head;
        while(temp){
            s += temp->data;
            temp=temp->next;
        }
        
        string rev=s;
        reverse(rev.begin(), rev.end());
        return s == rev;
    }
};