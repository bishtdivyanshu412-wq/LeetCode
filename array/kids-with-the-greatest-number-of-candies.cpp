class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int extra) {
      int n = nums.size();
      int maxi = nums[0];
      for(int i=0;i<n;i++){
        if(maxi<nums[i]) maxi = nums[i];
      }
      vector<bool> v;
      for(int i=0;i<n;i++){
        if(extra+nums[i]>=maxi){
            v.push_back(true);
        }
        else {
            v.push_back(false);
        }
      }
      return v;  
    }
};