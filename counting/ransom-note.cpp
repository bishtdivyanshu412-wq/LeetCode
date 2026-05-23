class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[26] = {0};
        int hash1[26] = {0};
        
        for(char c : ransomNote) hash[c - 'a']++;
        for(char c : magazine)   hash1[c - 'a']++;
        
        for(int i = 0; i < 26; i++) {
            if(hash[i] > hash1[i]) return false;
        }
        return true;
    }
};