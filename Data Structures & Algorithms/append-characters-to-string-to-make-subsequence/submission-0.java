class Solution {
    public int appendCharacters(String s, String t) {
        
        int ssize=s.length();
        int tsize=t.length();
        int i=0;
        int j=0;
         while(i<ssize && j<tsize){

            if(s.charAt(i)==t.charAt(j)){
                j++;
            }
            i++;
         }

         if(j==tsize) return 0;

         return (tsize-j);

    }
}