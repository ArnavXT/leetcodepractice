# Last updated: 9/6/2026, 12:29:40 PM
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