# Last updated: 11/28/2026, 2:55:19 PM
1class Solution:
2    def countGoodTriplets(self, arr: List[int], a: int, b: int, c: int) -> int:
3        n, cnt = len(arr), 0
4        for i in range(n - 2):
5            for j in range(i + 1, n - 1):
6                for k in range(j + 1, n):
7                    if abs(arr[i] - arr[j]) <= a and abs(arr[j] - arr[k]) <= b and abs(arr[k] - arr[i]) <= c:
8                        cnt += 1
9        return cnt