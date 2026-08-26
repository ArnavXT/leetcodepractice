# Last updated: 8/26/2026, 9:59:40 AM
class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        count = {}
        i = 0
        res = 0
        
        for j, ch in enumerate(s):
            count[ch] = count.get(ch, 0) + 1
            while count[ch] > 2:
                count[s[i]] -= 1
                i += 1
            res = max(res, j - i + 1)

        return res