# Last updated: 8/26/2026, 10:03:32 AM
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        return bin(int(a,2) + int(b,2))[2:]
