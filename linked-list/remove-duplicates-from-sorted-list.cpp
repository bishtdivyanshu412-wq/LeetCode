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
    ListNode* deleteDuplicates(ListNode* head) {
      ListNode* dummy = new ListNode(-1);
      ListNode* temp1 = dummy;
      ListNode* temp = head;
      ListNode* prev = head;
      
      ListNode* newnode = new ListNode(temp->val);
      temp1->next = newnode;
      temp1 = temp1->next;
      while(temp != NULL){
        if(prev->val != temp->val){
        ListNode* newnode = new ListNode(temp->val);
        temp1->next = newnode;
        temp1 = temp1->next;
        prev = temp;
        }
        temp = temp->next;
      }  
      temp1->next = NULL;
      return dummy->next;
    }
};