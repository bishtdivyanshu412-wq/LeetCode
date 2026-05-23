class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        vector<string> ans;
       map<int,string>mpp;
       for(int i =0;i<h.size();i++){
        mpp[h[i]] = n[i];
       } 
       sort(h.begin(),h.end(),greater<int>());
       for(int i =0;i<h.size();i++){
        ans.push_back(mpp[h[i]]);
       }
       return ans;
    }
};