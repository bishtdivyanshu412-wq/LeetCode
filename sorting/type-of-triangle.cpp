class Solution {
public:
    string triangleType(vector<int>& nums) {
     int count1 = nums[0];
     int count2 = nums[1];
     int count3 = nums[2];

     if(count1 == count2 && count2 == count3) return "equilateral";
     else if(count1 == count2 && count2 != count3) return "isosceles";
     else if (count1 == count3 && count2 != count1) return "isosceles";
     else if (count1 != count2 && count2 == count3) return "isosceles";
      return "scalene";   
    }
};