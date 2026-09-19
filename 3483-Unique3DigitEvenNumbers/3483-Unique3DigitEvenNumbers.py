# Last updated: 9/20/2026, 12:40:19 AM
class Solution:
    def totalNumbers(self, digits):
        n = len(digits)
        seen = set()
        n = len(digits)
        seen = set()
        for i in range(n):
            if digits[i]==0:
                continue
            
            for j in range(n):
                if j == i:
                    continue

                for u in range(n):
                    if u == i or u == j:
                        continue

                    if digits[u] % 2 != 0:
                        continue

                    num = digits[i] * 100 + digits[j] * 10 + digits[u]
                    seen.add(num)

        return len(seen)