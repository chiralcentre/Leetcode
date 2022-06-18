import java.util.HashMap;

class Solution {
    public int firstUniqChar(String s) {
        HashMap<Character,Integer> frequencies = new HashMap<>();
        for (int i = 0; i < s.length(); i++){
            if (!frequencies.containsKey(s.charAt(i))) frequencies.put(s.charAt(i),1);
            else frequencies.put(s.charAt(i),frequencies.get(s.charAt(i))+1);
        }
        for (int i = 0; i < s.length(); i++){
            if (frequencies.get(s.charAt(i)) == 1) return i;
        }
        return -1; //no unique characters found
    }
}