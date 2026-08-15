class Solution {
public:
    vector<int> minOperations(string box) {
        int n = box.size();
        vector<int>ans;

        for(int i =0;i<n;i++){
            int count = 0;
            for(int j =0;j<n;j++){
                if(box[j] == '1' && i!=j){
                    count += abs(i-j);
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};