class Solution {
public:


    bool bs(vector<int>& arr2 , int ans,int target){
        int k = arr2.size();

        int low = 0 ;
        int high = k-1;

        while(low<=high){
            int mid = low+(high-low)/2;

            if(abs(ans-arr2[mid])<=target) return true;
            else if(abs(ans-arr2[mid])>target) high = mid-1;
            else low = mid+1;
        } 
        return false;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
      int n = arr1.size();
      int m = arr2.size();
      int count = 0;

      sort(arr2.begin(),arr2.end());

      for(int i =0;i<n;i++){
        if(bs(arr2,arr1[i],d)==false){
            count++;
        }
      }
      return (n-count);  
    }
};