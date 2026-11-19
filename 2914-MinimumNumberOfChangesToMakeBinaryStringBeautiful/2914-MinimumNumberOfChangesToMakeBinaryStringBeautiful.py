# Last updated: 11/19/2026, 5:55:45 PM
class Solution:
    def minChanges(self, s: str) -> int:
        c = 0
        for i in range(0, len(s), 2):
            if s[i] != s[i+1]:
                c+=1
        return c