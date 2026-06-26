/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
          if(head == NULL || head->next == NULL)
         return head;
         ListNode* fast=head;
         ListNode* slow=head->next;
         ListNode* evenhead=head->next;
         
         while(slow!=NULL&&slow->next!=NULL){
            fast->next=fast->next->next;
            fast=fast->next;
            slow->next=slow->next->next;
            slow=slow->next;
         }
         fast->next=evenhead;
         return  head;
    }
};