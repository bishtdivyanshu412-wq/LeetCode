class Solution {
public:
    string removeKdigits(string num, int k) {
      int n = num.size();
      if(k>n) return "0";
     while(k>=0){
        num.erase(0,1);
        k--;
     } 
     if(num[0] == '0'){
        int i =0;
        while(num[i]== '0' && i<num.size()){
            num.erase(0,1);
            i++;
        }
        return num;
     }
     if(num.empty()) return "0";
     return num;
    }
};