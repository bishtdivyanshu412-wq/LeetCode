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
    ListNode* middleNode(ListNode* head) {
     ListNode* temp = head ;
     int count = 0;
     while(temp!=NULL){
        count++;
        temp = temp->next;
     } 
     ListNode* curr = head;  
     if(count%2 !=0){
        int n = 1;
     while(curr!=NULL){
        if(n == (count+1)/2) return curr;
        n++;
        curr = curr->next;
     }
     }
     else {
        int n = 1;
        ListNode*head1 = head;
        while(head1!=NULL){
            if(n == (count/2)+1) return head1;
            n++;
            head1 = head1->next;
        }
     }
     return head;
    }
};