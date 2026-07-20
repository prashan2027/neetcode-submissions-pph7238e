class Solution {
    public int specialArray(int[] nums) {

      int size=nums.length;

      if(size==0){
        return 0;
      }
        for(int i=1;i<=size;i++){
           int count=0;
           for(int j=0;j<size;j++){
              
              if(nums[j]>=i){
                count++;
              }


           }

           if(count==i){
            return count;
           }
        }
        return -1;
    
    }
}