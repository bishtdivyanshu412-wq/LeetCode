class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int> middle;
        vector<int>right;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]>pivot) right.push_back(nums[i]);
            else if(nums[i]<pivot) left.push_back(nums[i]);
            else if(nums[i] == pivot ) middle.push_back(nums[i]);
        }
        for(int i =0;i<left.size();i++){
         nums[i] = left[i];   
        }
        int j = left.size();
        for(int i = 0;i<middle.size();i++){
            nums[j] = middle[i];
            j++;
        }
        for(int i = 0;i<right.size();i++){
            nums[j] = right[i];
            j++;
        }
        return nums;
    }
};