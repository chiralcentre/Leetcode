class Solution:
    def firstUniqChar(self, s: str) -> int:
        frequencies = {}
        for char in s:
            frequencies[char] = 1 if char not in frequencies else frequencies[char] + 1
        for i in range(len(s)):
            if frequencies[s[i]] == 1:
                return i
        return -1
