class Solution {
public:
    int findGCD(vector<int>& nums) {
    int n = nums.size();
    int max = nums[0];
    int min = nums[0];
    int gcd =1; 
    for(int i=0;i<n;i++){
        if(nums[i]>max) max = nums[i];
        if(nums[i]<min) min = nums[i];
    } 
    for(int i=1;i<max+1;i++){
        if(min%i==0 && max%i==0){
            gcd = i;
        }
    }  
    return gcd;
    }
};