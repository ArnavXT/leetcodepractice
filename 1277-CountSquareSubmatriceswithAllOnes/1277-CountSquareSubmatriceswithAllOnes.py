# Last updated: 9/10/2026, 1:37:16 PM
1class Solution:
2    def countSquares(self, matrix: List[List[int]]) -> int:
3        n = len(matrix)
4        m = len(matrix[0])
5
6        dp = [[0] * m for _ in range(n)]
7
8        ans= 0
9
10        for i in range(n):
11            dp[i][0] = matrix[i][0]
12            ans += dp[i][0]
13        
14        for j in range(1,m):
15            dp[0][j] = matrix[0][j]
16            ans += dp[0][j]
17        
18        for i in range(1, n):
19            for j in range(1, m):
20                if matrix[i][j] == 1:
21                    dp[i][j] = 1 + min(dp[i][j-1], dp[i-1][j], dp[i-1][j-1])
22                ans += dp[i][j]
23        
24        return ans
25
26        
27