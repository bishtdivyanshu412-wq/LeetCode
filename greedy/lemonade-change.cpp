class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
      int n = bills.size();

      int c5 = 0;
      int c10 = 0;

      for(int i =0;i<n;i++){
        if(bills[i] == 20){
            if(c5 >=1 && c10>=1 ){
                c5--;
                c10--;
            }
            else if(c5>=3) c5-=3;
            else return false;
        }
        else if(bills[i] == 10){
            if(c5 >= 1){
                c5--;
                c10++;
            }
            else return false;
        }
        else{
            c5++;
        }
      }  
      return true;
    }
};