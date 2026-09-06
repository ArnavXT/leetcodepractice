# Last updated: 9/6/2026, 12:29:32 PM
class Solution:
    def kthCharacter(self, k: int) -> str:
        sb = ['a']
        while len(sb) < k:
            #for i in range(len(sb)):
                nextchr = [chr(ord(c) + 1) for c in sb]
                sb.extend(nextchr)
        return sb[k - 1]