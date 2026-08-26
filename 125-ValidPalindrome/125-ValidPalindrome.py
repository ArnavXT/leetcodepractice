# Last updated: 8/26/2026, 10:03:10 AM
class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = [c.lower() for c in s if c.isalnum()]
        return(s == s[::-1])