class Solution {
public:
    int getlengthofLL(ListNode* head){
    int length = 0;
    while(head != NULL){
        length++;
        head=head->next;
    }

        return length;
    }


    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = getlengthofLL(head);
        if(n==l){ //jodi n = l hoye jay then head delete kore debo
            ListNode* temp = head->next;
            delete(head);
            return temp;
        }

        int travel_front = l-n;
        ListNode* prev = NULL;
        ListNode* temp = head;

        while(travel_front--){
            prev = temp ;
            temp = temp->next;
        }

        prev->next = temp->next;
        delete(temp);

        return head;
    }
};