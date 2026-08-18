class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int>count(51,0);

        int i = 0;
        int j = 0;

        while(j<n){
           

            if((j-i+1)==k){
                vector<bool>visited(51,false);
                 for(int k = i;k<=j;k++){
                    visited[nums[k]] = true;
                 }

                 for(int k =0;k<visited.size();k++){
                    if(visited[k]){
                        count[k]++;
                    }
                 }
                i++;
            }
            

            j++;
        }
       
        for(int i = count.size()-1;i>=0;i--){
            if(count[i] == 1) return i;
        }
        return -1;
    }
};