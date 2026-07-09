class Solution {
public:
    int bitwiseComplement(int n) {
    int count = 0;
    int num = n;
    while(n!=0){
        count++;
        n = n>>1;
    } 

    for(int  i =0;i<count;i++){
        num = (num^(1<<i));
    }   
    return num;
    }
};