class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    int left = m-1;
    int right = 0;
    while(left>0 && right < n){
     if(nums1[left]>=nums2[right]){
        swap(nums1[left],nums2[right]);
        left--;right++;
     } 
     else break;
    }
    int j =0;
    for(int i=m;i<n1;i++){
        nums1[i] = nums2[j];
        j++;
    }
    sort(nums1.begin(),nums1.end());
    }
};