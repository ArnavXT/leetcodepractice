# Last updated: 8/6/2026, 3:35:30 PM
1class Solution:
2    def smallestNumber(self, n: int, t: int) -> int:
3        def check (num : int) -> bool:
4            product = 1
5
6            while num > 0:
7                product *= num%10
8                num//=10
9
10                if product == 0:
11                    break
12            return product % t == 0
13        while not check(n):
14            n += 1
15        return n
16            
17