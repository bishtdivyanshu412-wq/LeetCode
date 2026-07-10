class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> ans = score;
        sort(score.begin(),score.end(),greater<int>());

        vector<string>result(score.size());

        for(int i =0;i<score.size();i++){
            for(int j=0;j<ans.size();j++){
                if(score[i] == ans[j] && i == 0){
                    result[j] = "Gold Medal"; 
                }
                else if(score[i] == ans[j] && i == 1){
                    result[j] = "Silver Medal";
                }
                else if(score[i] == ans[j] && i == 2){
                    result[j] = "Bronze Medal";
                }
                else if(score[i] == ans[j]) {
                    int num = i+1;
                    result[j] =  to_string(num);
                }
            }
        }
        return result;
    }
};