# Last updated: 9/6/2026, 12:30:02 PM
class Solution:
    def shortestBeautifulSubstring(self, s: str, k: int) -> str:
        n = len(s)
        ans = ""
        for i in range(k, n + 1):
            for j in range(n - i +1):
                t = s[j: j + i]
                if (not ans or t < ans) and t.count("1") == k:
                    ans = t
            if ans:
                return ans
        return ""