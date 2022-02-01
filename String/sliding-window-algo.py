# Given a string s, find the length of the longest substring without repeating characters.
# https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        se = set()
        l = 0
        res = 0
        for r in range(len(s)):
            while s[r] in se:
                se.remove(s[l])
                l+=1
            se.add(s[r])
            res = max(len(se),res)
        return res
