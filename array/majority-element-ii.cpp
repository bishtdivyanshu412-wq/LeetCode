class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int el1 = 0, el2 = 0;
        int count1 = 0, count2 = 0;

        for (int x : nums) {
            if (x == el1) count1++;
            else if (x == el2) count2++;
            else if (count1 == 0) {
                el1 = x;
                count1 = 1;
            }
            else if (count2 == 0) {
                el2 = x;
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;

        for (int x : nums) {
            if (x == el1) count1++;
            else if (x == el2) count2++;
        }

        vector<int> v;
        if (count1 > n / 3) v.push_back(el1);
        if (count2 > n / 3) v.push_back(el2);

        return v;
    }
};
