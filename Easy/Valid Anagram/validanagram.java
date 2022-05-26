import java.util.HashMap;

class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() !=  t.length()){
            return false; //if the lengths of the two strings do not match, they cannot be anagrams of each other
        }
        HashMap<Character,Integer> letters = new HashMap<Character,Integer>();
        for (int i = 0; i < s.length(); i++){
            if (!letters.containsKey(s.charAt(i))) letters.put(s.charAt(i),1);
            else letters.put(s.charAt(i),letters.get(s.charAt(i))+1);
        }
        for (int i = 0; i < t.length(); i++){
            if (!letters.containsKey(t.charAt(i))) return false;
            letters.put(t.charAt(i),letters.get(t.charAt(i))-1);
        }
        for (char k: letters.keySet()){
            if (letters.get(k) != 0) return false;
        }
        return true;
    }
}
