class Solution {
public:
    int missingInteger(vector<int>& nums) {
       int n = nums.size();
       
       int maxsum = nums[0];
       for(int i =1;i<n;i++){
        if(nums[i] == nums[i-1]+1 ) {
            maxsum +=nums[i];
       }
       else {
        break;
       }
       }

       unordered_map<int,bool>mpp;

       for(int i  = 0;i<n;i++){
        mpp[nums[i]] = true;
       }

       while(true){
        if(mpp.find(maxsum) == mpp.end()) return maxsum;
        maxsum++;
       }
       return -1; 
    }
};