class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour %= 12;
        double angle = abs((60.0 * hour - 11.0 * minutes) / 2.0);
        return min(angle, 360.0 - angle);
    }
};