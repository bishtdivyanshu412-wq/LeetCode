class Solution {
public:
    int numWaterBottles(int bottle, int ex) {
    int ans = bottle;
    while (bottle >= ex) {
        int newBottles = bottle / ex;
        ans += newBottles;
        bottle = newBottles + (bottle % ex);
    }
    return ans;
}
};