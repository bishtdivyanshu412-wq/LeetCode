class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     int n = nums1.size();   
     vector<int>ans(n,-1);

     
     for(int i =0;i<n;i++){
        int k = -1;
        for(int j =0;j<nums2.size();j++){
            if(nums1[i] == nums2[j]) k = j;
        }

        for(int z = k+1;z<nums2.size();z++){
            if(nums1[i] < nums2[z]) {
                ans[i] = nums2[z];
                break;
            }
        }
     }
        return ans;
    }

};