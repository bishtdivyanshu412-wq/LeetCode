class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int n = c.size();

        int lsum = 0;
        int rsum = 0;
        int maxsum = 0;

        for(int i =0;i<k;i++){
            lsum += c[i];
        }
        maxsum = lsum;
        int j =0;
        for(int i = k-1;i>=0;i--){
            lsum -= c[i];
            rsum += c[n-1-j];
            maxsum = max(maxsum,lsum+rsum);
            j++;
        }
        return maxsum;
    }
};