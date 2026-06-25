
class Solution {
 public:
    ListNode *detectCycle(ListNode *head) {
     ListNode* fast=head;
     ListNode* slow=head;
     ListNode* ptr=head;
     ListNode* Next;
     while(fast!=NULL&&fast->next!=NULL){
       slow= slow->next;
        fast=fast->next->next;
        if(slow==fast){
         while( ptr!=slow){
             ptr=ptr->next;
             slow=slow->next;
          
            }  
            return ptr ;
        }
     }
        return NULL;
        
    }
};