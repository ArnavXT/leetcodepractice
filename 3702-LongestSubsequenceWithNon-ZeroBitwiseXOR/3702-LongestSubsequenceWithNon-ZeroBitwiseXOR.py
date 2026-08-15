# Last updated: 8/15/2026, 9:08:04 PM
1from typing import List
2
3class Solution:
4    def longestSubsequence(self, nums: List[int]) -> int:
5        xor_value = 0
6        has_non_zero = False
7
8        for x in nums:
9            xor_value ^= x
10
11            if x != 0:
12                has_non_zero = True
13
14        if xor_value != 0:
15            return len(nums)
16
17        if has_non_zero:
18            return len(nums) - 1
19
20        return 0
21        