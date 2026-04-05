class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
 int sum=0;
 int count=0;
 int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum==k) count++;
                 
            }
            sum=0;
        }
        return count;
        
    }
};