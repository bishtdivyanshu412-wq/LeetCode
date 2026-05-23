class Solution {
public:
    bool isThree(int n) {
    int count =0;
    for(int i=1;i*i<=n;i++){
    if(n%i==0){
        count++;
        int other = n/i;
        if(i!=other) count++;
    }
    } 
    if(count ==3) return true;
    else return false;   
    }
};