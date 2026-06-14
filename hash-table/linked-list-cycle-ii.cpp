class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int> mpp;

        ListNode* temp = head;

        while(temp != NULL) {
            if(mpp[temp] == 1) {
                return temp;
            }

            mpp[temp] = 1;
            temp = temp->next;
        }

        return NULL;
    }
};