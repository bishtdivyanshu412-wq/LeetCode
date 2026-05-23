class Solution {
public:
    string reverseByType(string s) {
     int n = s.size();
     vector<int>alphabet;
     vector<int>special;
     for(int i=0;i<n;i++){
         if(s[i]>='a' && s[i]<='z') alphabet.push_back(s[i]);
         else special.push_back(s[i]);
     }
        reverse(alphabet.begin(),alphabet.end());
        reverse(special.begin(),special.end());
        int j=0;
        int k=0;
        for(int i=0;i<n;i++){
           if(s[i]>='a' && s[i]<='z') s[i] = alphabet[j++];
            else s[i] = special[k++];
        }
        return s;
    }
};