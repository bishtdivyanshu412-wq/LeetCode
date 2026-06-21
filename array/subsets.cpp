class Solution {
public:

    void print(int idx , vector<int>&ds , vector<vector<int>>& sub , vector<int>& nums){
        if(idx == nums.size()){
            sub.push_back(ds);
            return;
        }

        ds.push_back(nums[idx]);
        print(idx+1,ds,sub,nums);

        ds.pop_back();
        print(idx+1,ds,sub,nums);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>> sub;
      vector<int>ds;
      print(0,ds,sub,nums); 
      return sub; 
    }
};