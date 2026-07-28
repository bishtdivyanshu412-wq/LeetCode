class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        if(n==1) return s;
        vector<int>ans(26,0);

        for(int i =0;i<n;i++){
            ans[s[i]-'a']++;
        }
        
        int k =0;
        int j = n-1;

        for(int i =0;i<ans.size();i++){
            int count = ans[i];

            while(count ){

                if(count == 1){
                    s[k] = 'a'+i;
                    count = count  >> 1;
                   
                }
                s[k] = 'a'+i;
                s[j] = 'a'+i;
                k++;
                j--;
                count =  count >> 2;
            }
        }
       
       return s;
    }
};