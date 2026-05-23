class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int n = nums.size();
     map<int ,int> m;
     for(int i=0;i<n;i++){
        m[nums[i]]++;
     }  
     int maxf = 0;
     int maxi;
     for(auto &it : m){
        if(it.second>maxf){
            maxf = it.second;
            maxi = it.first;
        }
     } 
     return maxi;
    }
};