class Solution {
    public boolean hasDuplicate(int[] nums) {

        Set<Integer> st=new HashSet<Integer>();
        
        int size=nums.length;
        for(int i=0;i<size;i++){

            if(!st.add(nums[i])){
                return true;
            }
        }
        return false;
        
    }
}