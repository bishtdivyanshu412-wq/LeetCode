class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> vals;

        ListNode* temp = head;
        while (temp) {
            vals.push_back(temp->val);
            temp = temp->next;
        }

        int n = vals.size();

        for (int i = 0; i + k <= n; i += k) {
            reverse(vals.begin() + i, vals.begin() + i + k);
        }

        temp = head;
        int idx = 0;

        while (temp) {
            temp->val = vals[idx++];
            temp = temp->next;
        }

        return head;
    }
};