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
      ListNode* temp = head;
      vector<int> result;

      int maxsum = INT_MIN;

      while(temp != NULL){
        result.push_back(temp->val);
        temp = temp->next;
      }  
      ListNode* temp1 = head;
      for(int i = result.size()-1;i>=0;i--){
        int sum = temp1->val + result[i];
        maxsum = max(sum,maxsum);
        temp1 = temp1->next;
      }

      return maxsum;
    }
};