class Solution {
public:

    int partition(vector<int>& nums, int l, int r) {

        int pivot = nums[l];
        int i = l + 1;
        int j = r;

        while (true) {

            while (i <= r && nums[i] >= pivot)
                i++;

            while (j >= l && nums[j] < pivot)
                j--;

            if (i >= j)
                break;

            swap(nums[i], nums[j]);
        }

        swap(nums[l], nums[j]);

        return j;
    }

    int findKthLargest(vector<int>& nums, int k) {

        int l = 0;
        int r = nums.size() - 1;

        while (true) {

            int pivot = partition(nums, l, r);

            if (pivot == k - 1)
                return nums[pivot];

            else if (pivot > k - 1)
                r = pivot - 1;

            else
                l = pivot + 1;
        }
    }
};