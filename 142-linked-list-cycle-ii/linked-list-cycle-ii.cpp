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
    ListNode *detectCycle(ListNode *head) {
        ListNode* t1 = head;
        ListNode* t2 = head;
        while(t2  != NULL && t2->next != NULL){
            t1 = t1->next;
            t2 = t2->next->next;
            if(t1==t2){
                ListNode* ptr1 = head;
                ListNode* ptr2 = t1;
                while(ptr1 != ptr2){
                    ptr1 = ptr1->next;
                    ptr2 = ptr2->next;
                }
                return ptr1;
            }

        }
        return NULL;
    }
};