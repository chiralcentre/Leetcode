class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        frequencies = {}
        for n in nums:
            frequencies[n] = 1 if n not in frequencies else frequencies[n] + 1
        ordered = sorted(frequencies.items(),key = lambda x: x[1], reverse = True) #O (n log n) where n is number of unique elements
        return [ordered[i][0] for i in range(k)]
