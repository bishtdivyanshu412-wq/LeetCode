class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
     int x = nums.size();
     for(int i=0,j=n;j<x;j++,i++){
        v.push_back(nums[i]);
        v.push_back(nums[j]);
     } 
     return v;  
    }
};