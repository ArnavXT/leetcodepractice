# Last updated: 11/17/2026, 8:46:24 PM
class Solution:
    def digitSum(self, s: str, k: int) -> str:
        while len(s)> k:
            n = len(s)
            target = []
            for i in range(0, n, k):
                val = s[i : i + k]
                target.append(str(sum(int(d) for d in val)))
            s = "".join(target)
        return s