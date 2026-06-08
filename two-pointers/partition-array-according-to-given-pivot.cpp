class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
       int count = 0;
        vector<int>right;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]>pivot) right.push_back(nums[i]);
            else if(nums[i]<pivot) left.push_back(nums[i]);
            else if(nums[i] == pivot ) count++;
        }
        for(int i =0;i<left.size();i++){
         nums[i] = left[i];   
        }
        int j = left.size();
        for(int i = count ;i>0;i--){
            nums[j] = pivot;
            j++;
        }
        for(int i = 0;i<right.size();i++){
            nums[j] = right[i];
            j++;
        }
        return nums;
    }
};