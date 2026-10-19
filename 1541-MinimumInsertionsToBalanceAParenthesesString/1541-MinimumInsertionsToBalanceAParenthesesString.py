# Last updated: 10/19/2026, 11:24:14 AM
class Solution:
    def minInsertions(self, s: str) -> int:
        left = 0
        right_needed = 0

        for char in s:
            if char == '(':
                if right_needed % 2 != 0:
                    left += 1
                    right_needed -= 1

                right_needed += 2
            else:
                right_needed -= 1

                if right_needed < 0:
                    left += 1
                    right_needed += 2

        return left + right_needed