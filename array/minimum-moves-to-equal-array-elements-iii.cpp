class Solution {
public:
    int minMoves(vector<int>& nums) {
     int n = nums.size();
     int max =nums[0];
     int count =0;
     for(int i=1;i<n;i++){
      if(nums[i]>max){
        max = nums[i];
      }
     }
     for(int i=0;i<n;i++){
        int find = max-nums[i];
        count = count+find;
     }
     return count;
    }
};