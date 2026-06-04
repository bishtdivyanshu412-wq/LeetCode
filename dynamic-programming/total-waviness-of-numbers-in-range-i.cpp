class Solution {
public:
    int totalWaviness(int num1, int num2) {
       if(num1 < 100 && num2 < 100) return 0;
       int waviness = 0;
       for(int  j =num1;j<=num2;j++){
        int i = j;
        vector<int>ans;
        while(i!=0){
        int rem = i%10;
        ans.push_back(rem);
        i/=10;
        }
        reverse(ans.begin(),ans.end());
        for(int i = 1;i<ans.size()-1;i++){
          if(ans[i]>ans[i+1] && ans[i]>ans[i-1]) waviness++;
          else if(ans[i]<ans[i-1] && ans[i]<ans[i+1]) waviness++;
        }
       }
       return waviness;
    }
};