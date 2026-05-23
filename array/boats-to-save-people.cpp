class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
     sort(people.begin(),people.end());
     int j=people.size()-1;
     int i=0;
     int ans =0;
     while(i<=j){
        ans++;
        if(people[i]+people[j]<=limit) i++;
        j--;
     }   
     return ans;
    }
};