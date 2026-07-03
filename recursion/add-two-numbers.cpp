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
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = l1;
        ListNode* temp2 = l2;
        ListNode* curr = dummy;
        int carry = 0;
        while(temp != NULL && temp2 != NULL){
            int sum = 0;
            sum += carry;
            sum += temp->val + temp2->val;
            ListNode* newnode = new ListNode(sum%10);
            curr->next = newnode;
            carry = sum/10;

            temp = temp->next;
            temp2 = temp2->next;
            curr = curr->next;
        }
        while(temp != NULL){
            int sum = temp->val+carry;
            ListNode * newnode = new ListNode(sum%10);
            curr->next = newnode;
            carry = sum/10;

            temp = temp->next;
            curr = curr->next;
        }
        while(temp2 != NULL){
            int sum = temp2->val + carry;
            ListNode * newnode = new ListNode(sum%10);
            curr->next = newnode;
            carry = sum/10;

            temp2 = temp2->next;
            curr = curr->next;
        }
        if(carry){
            ListNode* newnode = new ListNode(carry%10);
            curr->next = newnode;
            carry/10;
            curr = curr->next;
        }
        curr->next = NULL;
        return dummy->next;
    }
};