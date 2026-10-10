# Last updated: 10/10/2026, 11:41:53 PM
1class Solution:
2    def findTheDifference(self, s: str, t: str) -> str:
3        s=Counter(s)
4        t=Counter(t)
5        for i in t:
6            if t[i]!=s[i]:
7                return i