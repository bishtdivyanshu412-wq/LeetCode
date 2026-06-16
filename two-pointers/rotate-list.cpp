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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return head;

        if(k==0) return head;

        vector<int>result;

        ListNode* temp = head;

        while(temp != NULL){
            result.push_back(temp->val);
            temp = temp->next;
        }
        int n = result.size();
        int rev = k%n;

        reverse(result.begin(),result.end());
        int i = 0;
        int rev1  = rev-1;
        while(i<rev1){
            swap(result[i],result[rev1]);
            i++;
            rev1--;
        }
        int j = rev;
        int x = n-1;

        while(j<x){
            swap(result[j],result[x]);
            j++;
            x--;
        }

        ListNode* curr = head;
        int y =0;
        while(curr != NULL){
            curr->val = result[y];
            curr = curr->next;
            y++;
        }
        return head;
    }
};