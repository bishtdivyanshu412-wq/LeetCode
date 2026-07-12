class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
     int n = nums.size();
     if(n==1) return true;
     if(nums[0] %2 == 0){ 
     for(int i =0;i<n;i++){
        if(i%2 !=0 && nums[i]%2 == 0) return false;
        else if(i%2 == 0  && nums[i]%2 != 0) return false;
     }
     }
     else{
        for(int i =0;i<n;i++){
            if(i%2 == 0 && nums[i]%2 == 0) return false;
            else if(i%2 != 0 && nums[i]%2 != 0) return false;
        }
     }
     return true;  
    }
};