class Solution {
public:
    int maximumProduct(vector<int>& nums) {
      int n = nums.size();
      int fmax = INT_MIN;
      int smax = INT_MIN;
      int tmax = INT_MIN;

      sort(nums.begin(),nums.end());

      int i =0;
      int j = n-1;

     
    if(abs(nums[i])>=abs(nums[j])) {
        fmax = nums[i];
        i++;
    }
    else{
        fmax =  nums[j];
        j--;
    }

    if(abs(nums[i])>=abs(nums[j])){
      smax = nums[i];
      i++;
    }
    else{
        smax = nums[j];
        j--;
    }
    
    if(i == 2){
        tmax = nums[j];
        j--;
    } 
    else if(i!=2){
        if(abs(nums[i])>=abs(nums[j])){
            tmax = nums[i];
            i++;
        }
        else {
            tmax = nums[j];
            j--;
        }
    }
     return 1ll * (fmax*tmax*smax);
    }
};