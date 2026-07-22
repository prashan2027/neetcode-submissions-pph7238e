class Solution {
    public int scoreOfString(String s) {
        int ans=0;
        int val=s.charAt(0);
        for(int i=1;i<s.length();i++){
    
         ans+=Math.abs(val-s.charAt(i)); 
         val=s.charAt(i);       
        }
        return ans;
        
    }
 
}