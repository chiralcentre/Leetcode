import java.util.HashSet;

class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> unique = new HashSet<>();
        for (int n: nums){
            if (unique.contains(n)) return true;
            unique.add(n);
        }
        return false;
    }
}