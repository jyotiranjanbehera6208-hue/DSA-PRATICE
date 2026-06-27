class Solution {
public:

    // LC 21
    ListNode* merge(ListNode* list1, ListNode* list2) {

        ListNode dummy(-1);
        ListNode* tail = &dummy;

        while (list1 != NULL && list2 != NULL) {

            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            }
            else {
                tail->next = list2;
                list2 = list2->next;
            }

            tail = tail->next;
        }

        if (list1)
            tail->next = list1;

        if (list2)
            tail->next = list2;

        return dummy.next;
    }

    ListNode* sortList(ListNode* head) {

        // Base Case
        if (head == NULL || head->next == NULL)
            return head;

        // Find Middle
        ListNode* prev = NULL;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {

            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Break List
        prev->next = NULL;

        // Sort Left
        ListNode* left = sortList(head);

        // Sort Right
        ListNode* right = sortList(slow);

        // Merge
        return merge(left, right);
    }
};