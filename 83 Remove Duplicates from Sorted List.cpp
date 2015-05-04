/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return 0;
        ListNode *ptr;
        ptr = head;
        while(ptr->next != NULL) {
            if(ptr->next->val == ptr->val) {
                //delete ptr->next
                ListNode *ptr2 = ptr->next;
                ptr->next = ptr2->next;
                free(ptr2);
            }
            else {
                ptr = ptr->next;
            }
        }
        return head;
    }
};