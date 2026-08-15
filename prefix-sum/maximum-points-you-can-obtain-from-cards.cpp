class Solution {
public:
    int maxScore(vector<int>& c, int k) {
       int n =  c.size();
       int sum1 = 0;
       int sum2 = 0;
    
       
       for(int i =0;i<k;i++){
        sum1 += c[i];
        sum2 += c[n-1-i];
       }

       return max(sum1,sum2);
    }

};