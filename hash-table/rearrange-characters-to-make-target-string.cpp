class Solution {
public:
    int rearrangeCharacters(string s, string target) {

     int count = 0;

     while(1){
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