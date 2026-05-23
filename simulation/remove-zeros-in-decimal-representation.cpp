class Solution {
public:
    long long removeZeros(long long n) {
    long long  ans=0;
    int i=0;
    while(n!=0){
        long long rem = n%10;
        if(rem!=0){
            ans = rem*pow(10,i) + ans;
            i++;
        }
        n =n/10;
    } 
    return ans;   
    }
};