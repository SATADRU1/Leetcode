/* Structure of Linked List Node
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* prev = nullptr;
        Node* curr = head;
        Node* temp = nullptr;
        
        while(curr != nullptr){
            temp = curr->next;
            curr->next = prev ;
            prev = curr;
            curr = temp;
        }
        
        return prev;
    }
    
};