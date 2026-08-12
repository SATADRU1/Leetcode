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
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        if(head1==NULL)
            return head2;
        
        if(head2==NULL)
            return head1;
            
        Node* result;
        if(head1->data < head2->data){
            result = head1;
            result->next = sortedMerge(head1->next,head2);
        } else {
            result = head2;
            result->next = sortedMerge(head1, head2->next);
        }
        return result;
    }
};