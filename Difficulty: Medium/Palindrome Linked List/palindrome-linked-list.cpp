/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
  
    Node* revLL(Node* head){
            if(head==NULL || head->next == nullptr)
                return head;
                
            Node* last = revLL(head->next);
            head->next->next = head;
            head->next = NULL;
            return last;    
            
        }
    
    bool isPalindrome(Node *head) {
        //  code here
        if(head==nullptr ||head->next==nullptr)
            return true;
        
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;
        
        while(fast!=nullptr && fast->next!=nullptr){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        Node* tail = revLL(slow);
        prev->next = NULL;
        while(tail!=nullptr && head!=nullptr){
            if(tail->data != head->data)
                return false;
            
            head=head->next;
            tail=tail->next;
        }
        return true;
    }
};