# Last updated: 9/17/2026, 12:31:38 AM
1class Solution(object):
2    def alternateDigitSum(self, n):
3        sum0, sum1, count = 0, 0, 0
4        while n != 0:
5            if count % 2 == 0:
6                sum0 += n % 10
7            else:
8                sum1 += n % 10
9            n //= 10
10            count += 1
11        return (sum1 - sum0) if count % 2 == 0 else (sum0 - sum1)