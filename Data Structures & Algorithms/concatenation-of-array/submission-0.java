class Solution {
    public int[] getConcatenation(int[] nums) {
        
        int size=nums.length;

        int[] ans=new int[2*size];

        for(int i=0;i<2*size;i++){
            ans[i]=nums[i%size];
        }
        return ans;
        
    }
}