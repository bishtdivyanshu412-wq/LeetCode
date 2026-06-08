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
     ListNode* j = head;
     int count = 1;
     ListNode* i = head;
     while(j!=NULL){
        if(count%2 != 0){
            int data = j->val;
            j->val = i->val;
            i->val = data;
            i = i->next;
        }
        j = j->next;
        count++;
     } 
     ListNode* temp = head;
     while(temp->next->next != NULL){
        temp = temp->next;
     } 
     int data = temp->val;
     temp->val = temp->next->val;
     temp = temp->next;
     temp->val = data;
     return head; 
    }
};