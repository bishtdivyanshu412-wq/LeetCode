class Solution {
public:
    vector<int> scoreValidator(vector<string>& s) {
        int n = s.size();
        int score = 0;
        int counter = 0;
        int count = 0;
       for(int i =0;i<n;i++){
        if(s[i]=="1") score+=1;
        else if(s[i] == "2") score +=2;
        else if(s[i] == "3") score+=3;
        else if(s[i] == "4") score+=4;
        else if(s[i] == "5") score+=5;
        else if(s[i] == "6") score+=6;
        else if(s[i] == "W"){
            counter++;
            count++;
        }
        else if(s[i] == "NB") score+=1;
        else if(s[i] == "WD") score+=1;
        if(count == 10 ) break;
       } 
       return {score,counter};
    }
};