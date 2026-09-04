# Last updated: 9/4/2026, 4:56:40 PM
1class Solution:
2    def subsets(self, nums: List[int]) -> List[List[int]]:
3        def backtrack(start, path):
4            result.append(path)
5            for i in range(start, len(nums)):
6                backtrack(i + 1, path + [nums[i]])
7
8        result = []
9        backtrack(0, [])
10        return result