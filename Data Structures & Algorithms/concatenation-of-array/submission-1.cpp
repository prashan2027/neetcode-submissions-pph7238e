class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int len=2*n;
        vector<int>ans(len,0);
        for(int i=0;i<len;i++){
            ans[i]=nums[i%n];
        }
        return ans;
    }
};