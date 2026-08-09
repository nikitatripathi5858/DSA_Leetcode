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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            int len = 0;
            ListNode* temp = head;
          while(temp){
            len++;
            temp = temp->next;
          }
          if(len==n) return head->next;
          ListNode* c = head;
          ListNode* p = NULL;

          int cnt = 1;
           int pos = len - n + 1;
          while(cnt < pos){
             p = c;
             c = c->next;
             cnt++;
          }
          p->next = c->next;
          return head;
        
    }
};