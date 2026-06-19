class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    int altitude = 0;
    int maxalt = 0; 
    int n = gain.size();

    for(int i =0;i<n;i++){
        int alt = gain[i] + altitude;
        altitude = alt;
        maxalt = max(altitude,maxalt);
    }    
    return maxalt;
    }
};