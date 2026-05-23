class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> v;
     for(int i=0;i<n;i++){
        int ans = start + (2*i);
        v.push_back(ans); 
     }  
     int xorans = 0;
     for(int i=0;i<v.size();i++){
        xorans = xorans^v[i];
     }
     return xorans;
     
    }
};