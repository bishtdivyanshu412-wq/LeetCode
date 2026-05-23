class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     long long n = nums.size();
     bool check =false;
     for(int i=0;i<n;i++){
     if(nums[i]>0) check = true;
     }
     if(check == false ) return 1;
     unordered_map<long long , int > mpp;
     long long maxi = *max_element(nums.begin(),nums.end());
     for(int i=0;i<n;i++){
        if(nums[i]>=1){
            mpp[nums[i]]++;
        }
     }
     for(long long i = 1 ; i<=maxi ; i++){
        if(mpp.find(i) == mpp.end()) return i;
        
     }
     return maxi+1;
    }
};