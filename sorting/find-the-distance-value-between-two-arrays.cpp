class Solution {
public:
    bool bs(vector<int>& arr2, int x, int d) {
        int low = 0;
        int high = arr2.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr2[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }

        if (low < arr2.size() && abs(arr2[low] - x) <= d)
            return true;

        if (low > 0 && abs(arr2[low - 1] - x) <= d)
            return true;

        return false;
    }

    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());

        int count = 0;

        for (int x : arr1) {
            if (!bs(arr2, x, d))
                count++;
        }

        return count;
    }
};