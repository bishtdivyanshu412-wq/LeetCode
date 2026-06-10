class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int count = n / 4;

        unordered_map<int,int> mpp;

        for(int i = 0; i < n; i++){
            mpp[arr[i]]++;
        }

        for(auto it : mpp){
            if(it.second > count) return it.first;
        }

        return -1;
    }
};