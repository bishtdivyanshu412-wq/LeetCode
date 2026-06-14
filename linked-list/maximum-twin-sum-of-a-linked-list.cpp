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
    int pairSum(ListNode* head) {
     ListNode* slow = head;
     ListNode* fast = head;

     int maxsum =0;

     while(fast!= NULL && fast->next != NULL){
        slow = slow ->next ;
        fast = fast->next->next;
     }

     ListNode* curr = slow;
     ListNode* prev = 0;

     while(curr != NULL){
        ListNode* newnode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = newnode;
     }
     
     ListNode* temp = head;
     while(prev != NULL){
       int sum = prev->val + temp->val;
       maxsum = max(sum,maxsum);

       prev = prev->next ;
       temp = temp->next;
     }
      return maxsum;
    }
};