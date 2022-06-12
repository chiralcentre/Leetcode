#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        //1 way to climb 0 steps, 1 way to climb 1 step
        vector<int> solution = {1,1};
        for (int i = 2; i <= n; i++){
            solution.push_back(solution[i-2] + solution[i-1]);
        }
        return solution[n];
    }
};