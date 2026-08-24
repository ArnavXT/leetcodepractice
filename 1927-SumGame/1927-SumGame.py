# Last updated: 8/24/2026, 10:44:38 PM
1class Solution:
2    def sumGame(self, num: str) -> bool:
3        n = len(num)
4        sumL = sumR = qL = qR = 0
5
6        for i in range(n):
7            if i < n // 2:
8                if num[i] == '?':
9                    qL += 1
10                else:
11                    sumL += int(num[i])
12            else:
13                if num[i] == '?':
14                    qR += 1
15                else:
16                    sumR += int(num[i])
17
18        if qL + qR == 0:
19            return sumL != sumR
20
21        if (qL + qR) % 2:
22            return True
23
24
25        if qL == qR:
26            return sumL != sumR
27        return 2 * (sumL - sumR) != 9 * (qR - qL)