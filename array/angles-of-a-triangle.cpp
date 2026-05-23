class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        vector<int> norqavelid = sides; 
        
        double a = sides[0];
        double b = sides[1];
        double c = sides[2];
        
        
        if (a + b <= c || b + c <= a || c + a <= b) {
            return {};
        }
        
        
        double A = acos((b*b + c*c - a*a) / (2*b*c)) * 180.0 / M_PI;
        double B = acos((a*a + c*c - b*b) / (2*a*c)) * 180.0 / M_PI;
        double C = acos((a*a + b*b - c*c) / (2*a*b)) * 180.0 / M_PI;
        
        vector<double> angles = {A, B, C};
        sort(angles.begin(), angles.end());
        
        return angles;
    }
};