class Solution {
public:
    int candy(vector<int>& nums) {
        int n = nums.size();

        int count = 0;
        int prev = 0;

        for(int i =0;i<n;i++){
            if(i==0){
               if(nums[0]>nums[1]) {
                count += 2;
                prev = count;
               }
               else{
                count +=1;
                prev = count;
               }
            }
            else {
                if(nums[i]>nums[i-1]){
                    count+= prev+1;
                    prev = prev+1;
                }
                else{
                    count+=1;
                    prev=1;
                }
            }
        }
        return count;
    }
};