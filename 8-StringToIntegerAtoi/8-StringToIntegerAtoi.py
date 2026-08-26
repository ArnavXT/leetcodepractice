# Last updated: 8/26/2026, 10:04:24 AM
class Solution:
    def myAtoi(self, s: str) -> int:
        result=0
        s = s.strip()
        if not s:
            return 0
        
        start_idx = 0
        if s[0] == '-' or s[0] == '+':
            start_idx = 1
        for i in s[start_idx:]:
            if i.isdigit():
                result = result * 10 + (ord(i) - ord('0'))
            else:
                break
        if not result:
            result = 0
        result=int(result)
        if s[0]=="-":
            result*=-1
        INT_MIN, INT_MAX = -2**31, 2**31 - 1
        if result < INT_MIN:
            return INT_MIN
        if result > INT_MAX:
            return INT_MAX
        return result