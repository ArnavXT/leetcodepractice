# Last updated: 9/1/2026, 11:11:19 AM
1class Solution:
2	def subarraysDivByK(self, nums: List[int], k: int) -> int:
3		d = {0: 1}
4		prefix_sum, count = 0, 0
5
6		for num in nums:
7			prefix_sum = (prefix_sum + num) % k
8			count += d.get(prefix_sum, 0)
9
10			d[prefix_sum] = d.get(prefix_sum, 0) + 1
11
12		return count
13        