import java.util.ArrayList;

class Solution {
    public int climbStairs(int n) {
        ArrayList<Integer> solution = new ArrayList<Integer>();
        //1 way to climb 0 steps, 1 way to climb 1 step
        solution.add(1); solution.add(1);
        for (int i = 2; i <= n; i++){
            solution.add(solution.get(solution.size()-2) + solution.get(solution.size()-1));
        }
        return solution.get(n);
    }
}