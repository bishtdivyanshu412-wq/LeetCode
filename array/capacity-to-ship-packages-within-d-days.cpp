class Solution {
public:
    int check(vector<int>& nums, int mid) {
        int days = 1;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] > mid) {
                days++;
                sum = nums[i];
            } else {
                sum += nums[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& nums, int days) {
        int low = *max_element(nums.begin(), nums.end());
        int high = 0;
        for (int x : nums) high += x;

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (check(nums, mid) <= days) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
