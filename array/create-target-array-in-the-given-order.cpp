class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target(nums.size());
        int size = 0;

        for(int i = 0; i < nums.size(); i++) {
            for(int j = size; j > index[i]; j--) {
                target[j] = target[j - 1];
            }
            target[index[i]] = nums[i];
            size++;
        }
        return target;
    }
};