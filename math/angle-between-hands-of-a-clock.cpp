class Solution {
public:
    double angleClock(int hour, int minutes) {
     double angle1 = ((60*hour)-(11*minutes))/2.00;
     double angle2 = 360 - angle1;

     return abs(min(angle1,angle2));   
    }
};