class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
     int n = nums.size();
     int j = 1;
     while(true){
        int find = j*k;
        bool flag = false;
        for(int i =0;i<n;i++){
           if(nums[i] == find) flag = true;
        }
        if(flag == false) return find;
        j++;
     }  
     return -1; 
    }
};