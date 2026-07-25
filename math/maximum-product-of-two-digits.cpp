class Solution {
public:
    int maxProduct(int n) {
     
     int largest = INT_MIN;
     int secondlargest = largest;

     while(n!=0){
        int bit = n%10;
        
       if(bit>largest){
        secondlargest = largest;
        largest = bit;
       }
       else if(bit>=secondlargest){
        secondlargest = bit;
       }
        n/=10;
     }
     return 1ll * secondlargest*largest; 
    }
};