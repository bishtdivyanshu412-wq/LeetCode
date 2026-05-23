class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n = nums.size();
                unordered_map<int,int> mpp;
                    for(int i=0;i<n;i++){
                            int tar = target - nums[i];
                                   if(mpp.find(tar)!=mpp.end()){
                                           return {i,mpp[tar]};
                                                  }
                                                         mpp[nums[i]] = i;
                                                             }
                                                                 return {-1,-1};
                                                                     }
                                                                     };
