# Last updated: 10/19/2026, 11:25:24 AM
class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        s=Counter(s)
        t=Counter(t)
        for i in t:
            if t[i]!=s[i]:
                return i