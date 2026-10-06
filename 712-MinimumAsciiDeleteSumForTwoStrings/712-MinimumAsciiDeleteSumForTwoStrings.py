# Last updated: 10/6/2026, 2:15:16 PM
class Solution:
    def minimumDeleteSum(self, s1: str, s2: str) -> int:
        m = len(s1)
        n = len(s2)
        dp = [[0] * (n + 1) for i in range (m+1)]
        for j in range (1, m + 1):
            dp[j][0] = dp[j-1][0] + ord(s1[j-1])

        for k in range (1, n + 1):
            dp[0][k] = dp[0][k-1] + ord(s2[k-1])

        for j in range(1,m + 1):
            for k in range(1,n + 1):
                if s1[j - 1] == s2[k-1]:
                    dp[j][k] = dp[j-1][k-1]
                else:
                    dp[j][k] = min(dp[j-1][k] + ord(s1[j-1]),  dp[j][k-1] + ord(s2[k-1]))
        return dp[m][n]

