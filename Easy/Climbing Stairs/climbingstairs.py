class Solution: 
    #O(n) linear pass
    def climbStairs(self, n: int) -> int:
        #1 way to climb 0 steps, 1 way to climb 1 step
        arr = [1,1]
        for i in range(2,n+1):
            arr.append(arr[-2]+arr[-1])
        return arr[n]
