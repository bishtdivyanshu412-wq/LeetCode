class Solution {
public:
    int maxNumberOfBalloons(string s) {
     string target = "ballon"; 
    if(s == target ) return 0;
     int count = 0;

      while(true){
     for(int i =0;i<target.size();i++){
        int count1 =0;
        for(int j =0;j<s.size();j++){
            if(target[i] == s[j]) {
                 s[j] = '#';
                 count1++;
                 break;
            }
        }
        if(count1 == 0) return count;
     }
      count++;
     } 
     return 0;  
    }
  
}; 
  