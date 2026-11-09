# Last updated: 11/9/2026, 3:30:39 PM
1class Solution:
2    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
3        ans=len(words)
4        allowed=[x for x in allowed]
5        for i in words:
6            for j in i:
7                if j not in allowed:
8                    ans-=1
9                    break
10        return ans  