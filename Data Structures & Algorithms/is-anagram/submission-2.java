class Solution {
    public boolean isAnagram(String s, String t) {

        Map<Character, Integer> mps = new HashMap<>();
        Map<Character, Integer> mpt = new HashMap<>();

        int ssize = s.length();
        int tsize = t.length();

        if (ssize != tsize)
            return false;

        for (int i = 0; i < ssize; i++) {
            mps.put(s.charAt(i), mps.getOrDefault(s.charAt(i), 0) + 1);
            mpt.put(t.charAt(i), mpt.getOrDefault(t.charAt(i), 0) + 1);
        }

        if (mps.size() != mpt.size())
            return false;

        for (Character ch : mps.keySet()) {
            if (!mps.get(ch).equals(mpt.get(ch))) {
                return false;
            }
        }

        return true;
    }
}