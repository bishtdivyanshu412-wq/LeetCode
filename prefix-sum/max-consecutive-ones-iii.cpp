class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int n = nums.size();
      int maxcount = 0;

      for(int i = 0;i<n;i++){
        int x = k;
        int count = 0;
        for(int j =i;j<n;j++){
            if(nums[j] == 1){
                count++;
            }
            else if(nums[j] == 0  && x >0){
                count++;
                x--;
            }
            else if(nums[j] == 0) break;
        }
          maxcount = max(maxcount,count);
      } 
      return maxcount; 
    }
};