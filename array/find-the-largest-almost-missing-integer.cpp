class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
       int n = nums.size();

       int max = -1;

        vector<int>ans(51,0);
       for(int i=0;i<=n-k;i++){
        for(int j =i;j<(i+k);j++){
            ans[nums[j]]++;
        }
       }

        for(int k = ans.size()-1;k>=0;k--){
            if(ans[k] == 1){
                max = k;
                break;
            }
        }

       return max;
    }
};