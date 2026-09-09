# Last updated: 9/9/2026, 11:15:39 PM
1class Solution:
2    def countCommas(self, n: int) -> int:
3        if n < 1000:
4            return 0
5
6        ans = n - 999
7
8        if n >= 1000000:
9            ans += n - 999999
10
11        if n >= 1000000000:
12            ans += n - 999999999
13
14        if n >= 1000000000000:
15            ans += n - 999999999999
16
17        if n >= 1000000000000000:
18            ans += n - 999999999999999
19
20        return ans