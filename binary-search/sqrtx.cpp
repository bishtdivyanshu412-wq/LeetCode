class Solution {
public:
int binarysearch(int n){
       long long int s = 0;
        long long int e = n;
        int ans = -1;
       long long  int mid = s +(e-s)/2;
        while(s<=e){
            long long int square = mid *mid;
            if(square == n){
                return mid;
            }
            else if(square>n){
                e = mid-1;
            }
            else {
                ans = mid ;
                s = mid +1;
            }
            mid = s+(e-s)/2;
        }
  return ans;
    }
    int mySqrt(int x) {
        return binarysearch(x);
    }
};