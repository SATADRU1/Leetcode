class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return NULL;
        
        //insert new node in between original ll
        Node* curr = head;
        while(curr){
            Node* currNext = curr->next; //b
            curr->next = new Node(curr->val);//copy  a->x
            curr->next->next = currNext; //a->x->b

            curr = currNext; //b er kache curr jabe 
        }

        //random point
        curr = head; //reinitialise
        while(curr && curr->next){
            if(curr->random == NULL)
                curr->next->random = NULL;
            else//current er next er je random seta random point hoye jabe 
                curr->next->random = curr->random->next;

            curr = curr->next->next;
        }
        
        //seperation
        curr = head;
        Node* newHead = head->next;
        Node* newCurr = newHead;
        while(curr && newCurr){
            curr->next = curr->next == NULL? NULL : curr->next->next;
            newCurr->next = newCurr->next == NULL? NULL : newCurr->next->next;

            curr = curr->next;
            newCurr = newCurr->next;
        }

        return newHead;
    }
};