class Solution {
public:
    bool isGood(vector<int>& nums) {
     int n = nums.size();
     int maxi = nums[0];
     for(int i =0;i<n;i++){
      if(nums[i]>maxi) maxi = nums[i];
     } 
     vector<int> hash(maxi+1,0);
     for(int i = 0;i<n;i++){
        hash[nums[i]]++;
     }  
     bool flag = true;
     
        for(int i =1 ;i<maxi+1;i++){
          if(hash[maxi]!=2) {
            flag =  false;
            break;
          }
          if(hash[i] >1 && i != maxi) {
            flag = false;
            break;
          }
        }
     if(maxi+1 == n) return flag;
     return false ;
    }
};