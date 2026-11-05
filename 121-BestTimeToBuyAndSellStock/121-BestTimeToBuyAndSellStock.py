# Last updated: 11/5/2026, 8:23:01 PM
class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        if not prices:
            return 0
        minp = prices[0]
        maxp = 0

        for i in range(1, len(prices)):
            minp = min(minp, prices[i])
            p = prices[i] - minp
            maxp = max(p, maxp)
        return maxp