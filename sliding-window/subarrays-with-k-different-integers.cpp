class Solution {
public:
int check(int n , vector<int>& nums , int goal)
{ if(goal<0) return 0;
    int cnt = 0; 
     int l = 0 ; 
    int r = 0;
     unordered_map<int,int>mpp;

  while(r<n){ 
    mpp[nums[r]]++;
     while(mpp.size()>goal){
        mpp[nums[l]]--;
        if(mpp[nums[l]] == 0) mpp.erase(nums[l]);
         l++; 
         } 
         cnt = cnt + (r-l+1);
          r++; 
        }
         return cnt; 
     }
    int subarraysWithKDistinct(vector<int>& nums, int goal) {
        int n = nums.size();
         int left = check(n,nums,goal); 
         int right = check(n,nums,goal-1);
          return left-right; 
          
    }
};