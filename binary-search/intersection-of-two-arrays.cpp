class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> element;

        for (int i = 0; i < nums1.size(); i++) {
            bool found = false;

            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    found = true;
                    break; 
                }
            }

        
            if (found) {
                bool already = false;
                for (int k = 0; k < element.size(); k++) {
                    if (element[k] == nums1[i]) {
                        already = true;
                        break;
                    }
                }

                if (!already) {
                    element.push_back(nums1[i]);
                }
            }
        }
        return element;
    }
};
