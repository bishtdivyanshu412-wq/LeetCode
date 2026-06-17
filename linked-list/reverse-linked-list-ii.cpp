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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      ListNode* temp = head;

      vector<int>ans;

      while(temp != NULL){
        ans.push_back(temp->val);
        temp = temp->next;
      }  

      reverse(ans.begin()+left-1,ans.begin()+right);
      if(head == NULL && head->next == NULL) return head;
      ListNode* curr = head;
     int i =0;
      while(curr != NULL){
        curr->val = ans[i];
        curr = curr->next;
        i++;
      }
      return head;
    }
};