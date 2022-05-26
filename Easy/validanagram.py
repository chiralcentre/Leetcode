class Solution:
    #O(n) where n is length of both strings if both strings are equal in length
    def isAnagram(self, s: str, t: str) -> bool: 
        if len(s) != len(t): #if length of the strings are different, they cannot be anagrams
            return False
        letters = {}
        for char in s:
            letters[char] = 1 if char not in letters else letters[char] + 1
        for char in t:
            if char in letters:
                letters[char] -= 1
            else:
                return False
        for key in letters:
            if letters[key] != 0:
                return False
        return True
