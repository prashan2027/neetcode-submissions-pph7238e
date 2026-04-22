class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end=nums1.size()-1;
        int start=0;
        while(n--){
            nums1[end]=nums2[start];
            end--;
            start++;
        }
        sort(nums1.begin(),nums1.end());
            }
};