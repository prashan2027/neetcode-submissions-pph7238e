class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ans=0;
        int second=0;
        int n=nums.size();
        while(second<n){
            count++;
            if(nums[second]==0){
                count=0;
            }
            ans=max(ans,count);
            second++;
        }
        return ans;
    }
};