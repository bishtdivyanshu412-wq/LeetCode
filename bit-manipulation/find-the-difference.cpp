class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<int> nums(26,0);
     vector<int> nums1(26,0);  
     for(int i =0;i<n;i++){
        nums[s[i]-'a']++;
     } 
     for(int i =0;i<m;i++){
        nums1[t[i]-'a']++;
     }
     int find = -1;
     for(int i =0;i<nums.size();i++){
        if(abs(nums[i] - nums1[i]) != 0) {
            find = i;
            break;
     }
     }
     return char(97+find);
    }
};