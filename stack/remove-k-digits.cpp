class Solution {
public:
    string removeKdigits(string num, int k) {
     int n = num.size();
     stack<char>st;
     if(n==k) return "0";
     string ans = "";
     int i =0;
    while(i<n){
       
        while(!st.empty() && st.top() > num[i] && k>0){
            st.pop();
            k--;
        }
        st.push(num[i]);
        i++;
     }  
     while(!st.empty()) {
    ans += st.top();
    st.pop();
}
    reverse(ans.begin(), ans.end());

    int j = 0;

while(j < ans.size() && ans[j] == '0') {
    j++;
}

ans = ans.substr(j);

if(ans.empty())
    return "0";

return ans;
     return ans;
    }
};