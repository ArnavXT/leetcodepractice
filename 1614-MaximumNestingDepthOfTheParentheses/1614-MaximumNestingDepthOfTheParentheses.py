# Last updated: 10/6/2026, 2:14:21 PM
class Solution:
    def maxDepth(self, s: str) -> int:
        c_count = 0
        max_count = 0
        #total_count = 0
        for char in s:
            if char == "(":
                c_count += 1
                max_count = max(c_count,max_count)
                #total_count += 1
            elif char == ")":
                c_count -= 1
                
        return max_count

        