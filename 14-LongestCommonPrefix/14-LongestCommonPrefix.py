# Last updated: 8/26/2026, 10:04:14 AM
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:

        strs.sort()
        first = strs[0]
        last = strs[-1]
        i = 0

        while i < len(first) and i < len(last) and first[i] == last[i]:
            i += 1
        return first[:i]

        