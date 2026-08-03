# Last updated: 8/3/2026, 8:27:13 PM
1class Solution:
2    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
3        for i in range (m,m+n):
4            nums1[i]=nums2[i-m]
5        nums1.sort()
6        