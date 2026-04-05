class Solution {
    public int[] twoSum(int[] nums, int target) {
        int size=nums.length;
        int[] ans=new int[2];
    for(int i=0;i<size;i++){
       int num1=nums[i];
       for(int j=i+1;j<size;j++){
        if(num1+nums[j]==target){
            ans[0]=i;
            ans[1]=j;
           return ans;
        }
       }
       
    }
    return ans;
    

    }
}
