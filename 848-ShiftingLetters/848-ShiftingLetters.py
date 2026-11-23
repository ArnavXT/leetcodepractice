# Last updated: 11/23/2026, 8:56:21 AM
class Solution:
    def shiftingLetters(self, s: str, shifts: list[int]) -> str:
        ans,shift = '', 0
        for i in range(len(shifts) -1, -1, -1):
            ans += chr((ord(s[i]) - ord('a') + shift+shifts[i]) % 26 + ord('a'))
            shift += shifts[i]
        return ans[::-1]