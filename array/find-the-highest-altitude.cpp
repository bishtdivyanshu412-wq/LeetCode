class Solution {
public:
    int largestAltitude(vector<int>& gain) {
     int n = gain.size();
     int alt = 0;
     int maxalt =0;
     for(int i =0;i<n;i++){
      alt = alt + gain[i];
      maxalt = max(alt,maxalt);  
     }   
     return maxalt;
    }
};