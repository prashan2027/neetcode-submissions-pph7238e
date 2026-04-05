class Solution {
    public int scoreOfString(String s) {
 
        int size=s.length();
        int count=0;
        char pre=s.charAt(0);
        for(int i=1;i<size;i++){
            char character=s.charAt(i);
            count+=Math.abs(character-pre);
            pre=character;
        }
        return count;
        

    }
}