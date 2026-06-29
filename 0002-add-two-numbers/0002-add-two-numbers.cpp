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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(-1);
        ListNode* tail=&dummy;
        
        int carry=0;
        int digit=0;
        int sum=0;
        int x,y;
        while(l1!=NULL||l2!=NULL||carry!=0){
            if(l1==NULL){
            x=0;
            }else{
                x=l1->val;
                l1=l1->next;
            }
            if(l2==NULL){
             y=0;
            }else{
                y=l2->val;
                l2=l2->next;
            }

            sum=x+y+carry;
            digit=sum%10;
            carry=sum/10;
          ListNode* newnode = new ListNode(digit);
             tail->next=newnode;
             tail=tail->next;

        }
       
        return dummy.next;
    }
};