class Solution {
    public boolean isUgly(int n) {
    if(n<=0) return false;
    for(int i= 2 ;i<=5;i++){
        while(n%i == 0){
            n = n/i;
        }
    }
    if(n==1) return true;
    return false;    
    }
}