# Last updated: 9/18/2026, 10:47:51 PM
1class Solution:
2    def digitSum(self, n):
3        sum = 0
4        while n > 0:
5            sum += n % 10
6            n //= 10
7        return sum
8
9    def countBalls(self, lowLimit: int, highLimit: int) -> int:
10        c = Counter()
11        for i in range(lowLimit, highLimit + 1):
12            a = self.digitSum(i)
13            c[a] += 1
14
15        return c.most_common(1)[0][1]
16        