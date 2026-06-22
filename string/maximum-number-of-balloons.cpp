class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b = 0;
        int a =0;
        int l =0;
        int o = 0;
        int n =0;
        for(int i =0;i<text.size();i++){
            if(text[i] == 'a') a++;
            else if(text[i] == 'b') b++;
            else if(text[i] == 'l') l++;
            else if(text[i] == 'o') o++;
            else if(text[i] == 'n') n++;
        }

        int mini = min(min(min(a,b),l),min(o,n));
        if(mini == l || mini == o) return mini/2;
        return mini;
    }
};