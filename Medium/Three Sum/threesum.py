class Solution:
    def threeSum(self, nums: List[int]) -> Set[Tuple[int]]:
        sol = set()
        if len(nums) < 3: #there are not enough numbers
            return sol
        for i in range(len(nums)-1):
            remSum = -nums[i] #0 - nums[i]
            s = set()
            for j in range(i+1,len(nums)):
                if remSum - nums[j] in s:
                    sol.add(tuple(sorted([nums[i],nums[j],remSum-nums[j]])))
                else:
                    s.add(nums[j])
        return sol
