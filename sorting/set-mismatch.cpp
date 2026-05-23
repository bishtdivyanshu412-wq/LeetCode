class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    int  n = nums.size();
    int sum1=0;
    for(int i=0;i<n;i++){
        sum1+=nums[i];
    }
    int find = 0;
    vector<int> ans;
    for(int i = 0;i<n;i++){
        int idx = abs(nums[i])-1;
        if(nums[idx]<0){
            find = idx+1;
            ans.push_back(idx+1);
        }
        nums[idx] = -nums[idx];
    }    
    int sum = (n*(n+1))/2;
    int newsum = sum1-find;
    int msum = sum - newsum;
    ans.push_back(msum);
    return ans;
    }
};