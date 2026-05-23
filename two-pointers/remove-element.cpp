class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     vector<int> v;
     int n = nums.size();
     for(int i=0;i<n;i++){
        if(nums[i]!=val){
            v.push_back(nums[i]);
        }
     } 
     for(int i=0;i<v.size();i++){
        nums[i]=v[i];
     } 
     return v.size(); 
    }
};