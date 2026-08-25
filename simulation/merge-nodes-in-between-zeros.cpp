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
    ListNode* mergeNodes(ListNode* head) {
      ListNode* dummy = new ListNode(-1); 
      ListNode* curr  = dummy; 
      ListNode* temp = head;
      int sum = 0;
      while(temp != NULL){
       if(temp != head && temp->val == 0){
        ListNode* newnode = new ListNode(sum);
        curr->next = newnode;
        curr = curr->next;
        sum = 0;
       }

       sum += temp->val;
       temp = temp->next;
      }
      return dummy->next;
    }
};