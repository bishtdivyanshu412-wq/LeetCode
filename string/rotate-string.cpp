class Solution {
public:
    void reverse(string &  temp , int left , int right ){
        while(left<right){
            swap(temp[left],temp[right]);
            left++;
            right--;
        }
    }
    bool rotateString(string s, string goal) {
     int n = s.size();
      int x = goal.size();
     int ans = -1;
     for(int i=0;i<x;i++){
        if(s[0] != goal [i]) continue;
        string temp = goal;
     reverse(temp,0,i-1);
     reverse(temp,i,x-1);
     reverse(temp,0,x-1);
     if(s == temp) return true;
     }
     return false;
    }
};