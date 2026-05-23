class Solution {
public:
    vector<int> decimalRepresentation(int n) {
     if(n<=10) return {n};
     vector<int> result;
     
     long long  i=1; 
     while(n!=0){
        long long  bit = n%10;
        if (bit!= 0 ) result.push_back(bit*i);
        n  = n/10;
        i*=10;
     }  
     sort(result.begin(),result.end() ,greater<int>());
      return result;
    }
};