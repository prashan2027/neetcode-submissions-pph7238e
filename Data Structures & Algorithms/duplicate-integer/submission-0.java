class Solution {
    public boolean hasDuplicate(int[] nums) {
        int size=nums.length;
        if(size==0) return false;

        Arrays.sort(nums);
       
       int pre=nums[0];
        for(int i=1;i<size;i++){
            if(nums[i]==pre)
            return true;

            pre=nums[i];
        }
return false;
    }
}