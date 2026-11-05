# Last updated: 11/5/2026, 8:20:23 PM
class Solution:
    def numberOfEmployeesWhoMetTarget(self, hours: List[int], target: int) -> int:
        ans = 0
        for i in hours:
            if i >= target:
                ans+= 1
        return ans 