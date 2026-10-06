# Last updated: 10/6/2026, 2:16:26 PM
class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if not s or not t or len(s) < len(t):
            return ""

        t_chars={}
        for c in t:
            t_chars[c] = t_chars.get(c, 0) +1
        required = len(t_chars)
        w_chars={}
        l = 0
        formed = 0

        min_w = float('inf')
        start_ind = -1


        for r in range(len(s)):
            char = s[r]
            w_chars[char] = w_chars.get(char, 0) + 1

            if char in t_chars and w_chars[char] == t_chars[char]:
                formed += 1
            
            while l <= r and formed == required:
                if r - l + 1 < min_w:
                    min_w = r - l + 1
                    start_ind = l

                left_chars = s[l]
                w_chars[left_chars] -= 1

                if left_chars in t_chars and w_chars[left_chars]  < t_chars[left_chars]:
                    formed -= 1

                l += 1
        return ""  if min_w == float('inf') else s[start_ind : start_ind + min_w]
        