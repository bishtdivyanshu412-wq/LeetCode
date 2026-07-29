class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
      int n = arr.size();

      int sum = 0;

      for(int i =0;i<n;i++){
        for(int j = i ;j<n;j++){
            int mini = arr[j];
            for(int k = i ; k<=j;k++){
                if(arr[k]<mini) mini = arr[k];
            }
            sum += mini;
        }
      } 
      return sum; 
    }
};