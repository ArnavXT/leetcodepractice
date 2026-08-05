# Last updated: 8/5/2026, 11:47:11 PM
1class Solution:
2    def findMin(self, nums: List[int]) -> int:
3        left, right = 0, len(nums) - 1
4        while left < right:
5            mid = (left + right) // 2
6            if nums[mid] > nums[right]:
7                left = mid + 1
8            else:
9                right = mid
10        return nums[left]
11        