class Solution {
public:
    int numOfStrings(vector<string>& patterns, string words) {
     int n = patterns.size();

     int count = 0;

     for(int i = 0 ;i<n;i++){
        for(int j =0;j<patterns[i].size();j++){
            bool flag = false;
            for(int k =0;k<words.size();k++){
            if(words[k] == patterns[i][j]){
               flag = true; 
            }
            }
            if(flag == true){
                count++;
                break;
            }
        }
     }
     return count;   
    }
};