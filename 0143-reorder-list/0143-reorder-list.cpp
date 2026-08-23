class Solution {
public:

    ListNode* reverseLL(ListNode* head){
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* last = reverseLL(head->next);
        head->next->next=head;
        head->next=NULL;
        return last;
    }

    void reorderList(ListNode* head) {
        //find out middle node
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        //slow jeklhane theme jabe setai middle node 
        //reverse kore debo mid -> end
        ListNode* rev = reverseLL(slow);

        ListNode* curr = head;
        //while loop
        while(rev->next != NULL){
            ListNode* temp = curr->next;
            curr->next = rev;

            ListNode* tempPrev = rev->next;
            rev->next = temp;

            curr = temp;
            rev = tempPrev;
        }
    }
};