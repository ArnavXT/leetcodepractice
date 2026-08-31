# Last updated: 8/31/2026, 1:06:16 PM
1class Solution:
2    def kthCharacter(self, k: int) -> str:
3        sb = ['a']
4        while len(sb) < k:
5            #for i in range(len(sb)):
6                nextchr = [chr(ord(c) + 1) for c in sb]
7                sb.extend(nextchr)
8        return sb[k - 1]