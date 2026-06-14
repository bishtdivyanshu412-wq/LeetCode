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
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
      ListNode* temp1 = head1;
      ListNode* temp2 = head2;

      int count1 = 0;
      int count2 =0;

      while(temp1 != NULL){
        count1++;
        temp1 = temp1->next;
      } 

      while(temp2 != NULL){
        count2++;
        temp2 = temp2->next;
      }

      int delcount = abs(count1-count2);
        ListNode* curr1 = head1;
        ListNode* curr2 = head2;
      if(count1>count2){
        while(delcount>0){
         curr1 = curr1->next;
         delcount--;
        }
      }
      else{
        while(delcount>0){
         curr2 = curr2->next;
         delcount--;
        }
      }

      while(curr1 != NULL && curr2 != NULL){
        if(curr1 == curr2) return curr1;
        curr1 = curr1->next;
        curr2 = curr2->next;
      }
      return NULL;
    }
};