class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();


        int maxcount = 0;

        for(int i =0;i<n;i++){
            int count = 0;
           int b1 = fruits[i];
           int b2 = -1;
            for(int j =i;j<n;j++){
                if(b2 == -1 && fruits[j] != b1){
                    b2 = fruits[j];
                    count++;
                }
                else if(b1 == fruits[j] || b2 == fruits[j]){
                    count++;   
                }
                else break;
            }
               maxcount = max(maxcount,count);
        }

        return maxcount;
    }
};