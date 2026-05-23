class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
     unordered_map<int,int> freq;
unordered_set<int> seen;

for (int x : nums) freq[x]++;

for (auto &p : freq)
    if (!seen.insert(p.second).second)
        return false;

return true;
   
    }
};