class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
       int n = words.size();
       

       vector<int> reverse(26,0);
       int k = 0;
       for(int i = 25 ;i>=0;i--){
        reverse[k]  = i;
        k++; 
       }

       string ans;

       for(int i =0;i<n;i++){
        int sum = 0;
        for(int j =0;j<words[i].size();j++){
            sum += weights[words[i][j] - 'a'];
        }
        int result = sum%26;
        
        char ch = ('a' + reverse[result]);
        ans += ch;

        }
       return ans; 
    }
};