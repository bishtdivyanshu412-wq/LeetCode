class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int n= nums.size();
    vector<int> v;
    vector<int>v1;
    for(int i =0;i<n;i++){
        if(nums[i]>0) v.push_back(nums[i]);
        else v1.push_back(nums[i]);
    } 
    int y =0;
    int j=0;  
    for(int i=0;i<n;i++){
        if(i%2==0) {
            nums[i] = v[y];
            y++;
        }
        else{
         nums[i] = v1[j];
         j++;
        }
    } 
    return nums;
    }
};