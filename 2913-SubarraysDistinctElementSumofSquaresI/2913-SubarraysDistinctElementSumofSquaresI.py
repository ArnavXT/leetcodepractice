# Last updated: 10/16/2026, 9:28:04 PM
1class Solution:
2    def sumCounts(self, nums: List[int]) -> int:
3        total = 0
4        n = len(nums)
5        for i in range(n):
6            for j in range(i, n):
7                total += len(set(nums[i:j+1])) ** 2
8        return total
9        