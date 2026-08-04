class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
      int n = nums.size();
      int maxi = nums[0];
      int mini = nums[0];
      for(int i =0;i<n;i++){
        if(nums[i]>maxi) maxi = nums[i];
        if(nums[i]<mini) mini = nums[i];
      }  
      vector<int>result(maxi+1,0);

      for(int i = 0;i<n;i++){
        result[nums[i]]++;
      }
      vector<int>ans;
      for(int i =mini;i<=maxi;i++){
        if(result[i] == 0){
        ans.push_back(i);
        }
      }
      return ans;
    }
};