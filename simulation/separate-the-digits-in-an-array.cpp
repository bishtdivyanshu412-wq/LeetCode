class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
      int n = nums.size();
      vector<int>result;
      for(int i =0;i<n;i++){
        vector<int>anss;
        int node = nums[i];
        int ans = 0;
        while(node!=0){
            int rem = node%10;
            anss.push_back(rem);
            node/=10;
        }
        reverse(anss.begin(),anss.end());
        for(int i =0;i<anss.size();i++){
            result.push_back(anss[i]);
        }
      } 
      return result; 
    }
};