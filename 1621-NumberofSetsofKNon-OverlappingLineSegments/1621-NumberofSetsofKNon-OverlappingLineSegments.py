# Last updated: 9/16/2026, 11:07:00 PM
1class Solution:
2    def numberOfSets(self, n: int, k: int) -> int:
3        MOD = 10**9 + 7
4        return math.comb(n + k - 1, 2 * k) % MOD