class Solution {
    public boolean isAnagram(String s, String t) {
      int len1=s.length();
      int len2=t.length();

      if(len1!=len2) return false;
      int[] first=new int[26];
      int[] second=new int[26];

      for(int i=0;i<len1;i++){
         char ch1=s.charAt(i);
         char ch2=t.charAt(i);
         first[ch1-'a']+=1;
         second[ch2-'a']+=1;
      }

      for(int i=0;i<26;i++){
        if(first[i]!=second[i]) return false;
      }
      return true;


    }
}
