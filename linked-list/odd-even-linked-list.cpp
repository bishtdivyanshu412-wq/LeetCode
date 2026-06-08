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
     ListNode* temp = head;
     int count = 1;
     vector<int>left;
     vector<int>right;
     while(temp!=NULL){
        if(count%2 != 0){
          left.push_back(temp->val);
        }  
        else {
            right.push_back(temp->val);
        } 
        count++;
        temp = temp->next;
     } 
     int n = left.size();
     int m = right.size();
     int j =0;
     int i =0;
     int count1 = 0;
     int count2 = 0;
     ListNode* temp1 = head;
     while(temp1!=NULL){
        if(count1<n){
            temp1->val = left[i];
            i++;
            count1++;
            temp1 = temp1->next;
        }
        else if(count2<m){
            temp1->val = right[j];
            j++;
            count2++;
            temp1 = temp1->next;
        }
     }
     return head; 
    }
};