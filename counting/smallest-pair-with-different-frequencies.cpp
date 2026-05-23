class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
       int n = nums.size();
       int mini = nums[0];
       for(int i=0;i<n;i++){
        if(nums[i]<mini) mini = nums[i];
       }
       vector<int> freq(101+1,0);
       for(int i=0;i<n;i++){
        freq[nums[i]]++;
       }
       for(int i=0;i<freq.size();i++){
        if(mini<i && freq[i]!=freq[mini] && freq[i]!=0 ) return {mini,i};
       }
       return {-1,-1} ;
    }
};