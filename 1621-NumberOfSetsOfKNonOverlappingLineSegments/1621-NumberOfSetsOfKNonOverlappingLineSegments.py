# Last updated: 9/20/2026, 12:40:57 AM
class Solution:
    def numberOfSets(self, n: int, k: int) -> int:
        MOD = 10**9 + 7
        return math.comb(n + k - 1, 2 * k) % MOD