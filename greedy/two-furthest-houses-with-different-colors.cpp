class Solution {
public:
    int maxDistance(vector<int>& colors) {
      int n = colors.size();
      int dist = INT_MIN;
      for(int i =0;i<n;i++){
        if(colors[i] != colors[n-1]){
            int count = abs(n-1-i);
            dist = max(dist,count);
            break;
        }
      }
      for(int i = n-1 ;i>=0;i--){
        if(colors[i] != colors[0]){
            int count = i;
            dist = max(dist,count);
            break;
        }
      }
      return dist;
    }
};