# Last updated: 9/6/2026, 12:32:39 PM
class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        count = {}
        left = 0
        max_f= 0

        for right in range(len(s)):
            count[s[right]] = count.get(s[right],0) + 1
            max_f = max(max_f, count[s[right]])
            if (right - left + 1)- max_f> k:
                count[s[left]] -= 1
                left += 1
        return len(s) - left
        