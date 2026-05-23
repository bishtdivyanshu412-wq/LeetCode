class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int n = nums.size();
       unordered_map<int,int>mpp;
       for(int i=0;i<n;i++){
        mpp[nums[i]]++;
       }
     for(int j=0;j<n;j++){
        if(nums[j]%2==0 && mpp[nums[j]]==1){
        return nums[j];
     }
     }
     return -1;
     }

};