# Last updated: 10/19/2026, 11:25:21 AM
class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i = 0
        for c in t:
            if i < len(s) and s[i] == c:
                i+= 1
        return i == len(s)