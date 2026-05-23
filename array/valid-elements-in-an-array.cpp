class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
      int n = nums.size();
      if(n==1) return nums;
      if(n==2) return nums;
      vector<int>ans;
      ans.push_back(nums[0]);
      for(int i =1;i<n-1;i++){
        bool flag = 1;
        bool flag1 = 1;
        for(int j =0;j<i;j++){
            if(nums[i]<=nums[j]) flag = 0;
        }
        for(int k = n-1 ;k>i;k--){
            if(nums[i]<=nums[k]) flag1 = 0;
        }
        if(flag == 1) ans.push_back(nums[i]);
        else if(flag1 == 1) ans.push_back(nums[i]);
      }
      ans.push_back(nums[n-1]);
       return ans;
    }
};