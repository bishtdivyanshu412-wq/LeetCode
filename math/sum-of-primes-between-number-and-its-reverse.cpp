class Solution {
public:
    int sumOfPrimesInRange(int n) {
     int sum =0;
        int r = n;
        int rev =0;
        while(n!=0){
            int bit = n%10;
            rev = rev*10 + bit;
            n/=10;
        }
        for(int i =min(r,rev) ;i<=max(r,rev) ;i++){
            int count = 0;
            for(int j =1;j<=max(r,rev);j++){
                if(i%j == 0) count++;
            }
            if(count==2) sum+=i;
        }
        return sum;
    }
};