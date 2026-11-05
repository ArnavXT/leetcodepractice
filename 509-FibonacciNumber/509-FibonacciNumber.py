# Last updated: 11/5/2026, 8:21:37 PM
class Solution:
    def fib(self, n: int) -> int:
        if n <= 1:
            return n
        a, b = 0, 1
        for i in range(2, n + 1):
            a, b = b, b + a
        return b