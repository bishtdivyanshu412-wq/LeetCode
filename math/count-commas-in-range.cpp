class Solution {
public:
    int countCommas(int n) {
        if(n<1000) return 0;
        int x = n;
        int count =0;
        int maxcount =0;
        while(n!=0){
         int bit = n%10;
         count++;
         if(count%4==0) maxcount++;
            n=n/10;
        }
        if(count == 3) maxcount++;
         int add = maxcount;
        for(int i = x-1 ;i>=1000;i--){
            maxcount +=add;
        }
        return maxcount;
    }
};