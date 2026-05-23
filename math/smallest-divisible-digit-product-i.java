class Solution {
public int smallestNumber(int n, int t) {
    while(digits(n)%t!=0){
        n++;
    }
    return n;    
    }
     public int digits(int n){
        int product = 1;
        while(n!=0){
            int last_digit = n%10;
            product *=last_digit;
            n/=10;
        }
        return product;
    }
}