# Last updated: 8/29/2026, 9:23:13 PM
1class Solution:
2    def isIsomorphic(self, s: str, t: str) -> bool:
3        return [s.find(x) for x in s] == [t.find(x) for x in t]