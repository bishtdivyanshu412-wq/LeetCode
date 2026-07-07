class Solution {
public:
    int minBitFlips(int start, int goal) {
      int s = start;
      int g = goal;  

      int count = 0;

      vector<int>start1;
      vector<int>goal1;


      while(s!=0){
        int bit = s&1;
        start1.push_back(bit);
        s = s>>1;
      }
      while(g!=0){
        int bit = g&1;
        goal1.push_back(bit);
        g = g>>1;
      }

      int i =0;
      int j =0;

      while(i<start1.size()&& j<goal1.size()){
        if(goal1[j] != start1[i]){
            count++;
        }  
        i++;
        j++;      
      }
      while(j<goal1.size()){
        if(goal1[j] == 1){
        count++;
        }
        j++;
      }
      while(i<start1.size()){
        if(start1[i] == 1){
        count++;
        }
        i++;
      }
      return count;
    }
};