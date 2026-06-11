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

        while(temp != NULL){
            len++;
            temp = temp->next;
        }

        
        if(len == n){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        int pos = len - n;

        ListNode* curr = head;

        for(int i = 1; i < pos; i++){
            curr = curr->next;
        }

        ListNode* delNode = curr->next;
        curr->next = curr->next->next;
        delete delNode;

        return head;
    }
};