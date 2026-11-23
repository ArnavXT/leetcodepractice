# Last updated: 11/24/2026, 1:07:13 AM
class Solution:
    def sumOfMultiples(self, n: int) -> int:
        def s(k):
            m=n//k
            return k * m*(m+1)//2
        return(s(3)+s(5)+s(7)-s(15)-s(21)-s(35)+s(105))
        