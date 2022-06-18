import java.util.*;

class IntegerPair implements Comparable<IntegerPair> {// stores coordinates
    private Integer _first, _second;
  
    public IntegerPair(Integer f, Integer s) {
      _first = f;
      _second = s;
    }
  
    public int compareTo(IntegerPair o) {
      if (!this.first().equals(o.first())) return this.first() - o.first();
      else return this.second() - o.second();
    }
  
    Integer first() {return _first;}
  
    Integer second() {return _second;}
}

class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer,Integer> frequencies = new HashMap<>();
        for (int n: nums){
            if (!frequencies.containsKey(n)) frequencies.put(n,1);
            else frequencies.put(n,frequencies.get(n)+1);
        }
        ArrayList<IntegerPair> lst = new ArrayList<>();
        // first coordinate is frequency, second coordinate is number
        for (int key: frequencies.keySet()) lst.add(new IntegerPair(frequencies.get(key), key)); 
        Collections.sort(lst, Collections.reverseOrder());
        int[] ans =  new int[k];
        for (int i = 0; i < k; i++) ans[i] = lst.get(i).second();
        return ans;
    }
}