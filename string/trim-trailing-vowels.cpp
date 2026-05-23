class Solution {
public:
    string trimTrailingVowels(string s) {
        int i = s.size()-1;
        int count =0;
        
        while (i >= 0 && 
              (s[i] == 'a' || s[i] == 'e' || 
               s[i] == 'i' || s[i] == 'o' || 
               s[i] == 'u')) {
            i--;
            count++;
        }
        
        s.erase(i+1,count);
        return s;
    }
};