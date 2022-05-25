class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indices = {} #indices[a] stores the index of element a in nums
        for key,value in enumerate(nums):
            if target - value in indices:
                return [key,indices[target-value]]
            else:
                indices[value] = key
