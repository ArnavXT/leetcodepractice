# Last updated: 11/5/2026, 8:19:26 PM
class Solution:
    def findDegrees(self, matrix: list[list[int]]) -> list[int]:
        return [sum(i) for i in matrix]