class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

        vector<int>ans ;
      for(int i = low ;i<=high;i++){
        int prev = i%10;
        int num = i;
        bool flag = true;
        while(num!=0){
            int bit = num%10;
            if(bit != prev) {
                flag = false;
                break;
            }
            prev = bit-1;
            num = num/10;
        }
        if(flag == true) ans.push_back(i);
        
      } 
      return ans; 
    }
};