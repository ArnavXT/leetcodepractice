# Last updated: 11/5/2026, 8:19:18 PM
class Solution:
    def createGrid(self, m: int, n: int) -> list[str]:
        return ["." * n] + [".".rjust(n, "#")] * (m - 1)