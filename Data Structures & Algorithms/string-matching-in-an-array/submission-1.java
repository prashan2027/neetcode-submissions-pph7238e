class Solution {
    public List<String> stringMatching(String[] words) {
        Set<String> set=new HashSet<>();
        int size=words.length;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(j==i) continue;
                String str=words[i];
              if(str.contains(words[j])) {
               set.add(words[j]);
              }
            }
        }
        List<String> ll=new ArrayList<>();
        for(String s:set){
            ll.add(s);
        }
        return ll;
    }
}