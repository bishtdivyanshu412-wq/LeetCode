class Solution {
public:
    bool isPowerOfFour(int n) {

        if(n<=0) return false;
        if(n==2 || n==3) return false;
        int count = 0;
        int count0 = 0;
        vector<int> ans;

        while(n!=0){
            int rem = n&1;
            ans.push_back(rem);
            n = n>>1;
        }

        for(int i =0;i<ans.size();i++){
            if(ans[i] == 1) count++;
            else count0++;
        }

        if(count == 1 && count0%2 == 0) return true;
        return false;
    }
};