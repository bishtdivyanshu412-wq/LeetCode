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
    bool isPalindrome(ListNode* head) {
     ListNode* temp = head;
     vector<int> result;

     while(temp != NULL){
        result.push_back(temp->val);
        temp = temp->next;
     }   
     
     ListNode* curr = head;
     for(int i  = result.size()-1;i>=0;i--){
        if(result[i] != curr->val) return false;
        curr = curr->next;
     }
     return true;
    }
};