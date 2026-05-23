class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]%2==0) nums[i] = 0;
        else nums[i]=1;
    }  
    int k =0;
    for(int j=0;j<n;j++){
        if(nums[j]==0){
            swap(nums[k],nums[j]);
            k++;
        }
    }  
    return nums;
    }
};