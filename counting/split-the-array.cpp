class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n = nums.size();
     int max = nums[0];
     for(int i=0;i<n;i++){
        if(nums[i]>max) max = nums[i];
     }   
     vector<int> has(max+1,0);
     for(int i=0;i<n;i++){
        has[nums[i]]++;
     }
     for(int i=1;i<=max;i++){
        if(has[i]>2){
            return false;
        }
     }
     return true;
    }
};