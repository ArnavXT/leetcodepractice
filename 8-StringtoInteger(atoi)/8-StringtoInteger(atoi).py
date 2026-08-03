# Last updated: 8/3/2026, 1:21:01 PM
1class Solution:
2    def myAtoi(self, s: str) -> int:
3        result=0
4        s = s.strip()
5        if not s:
6            return 0
7        
8        start_idx = 0
9        if s[0] == '-' or s[0] == '+':
10            start_idx = 1
11        for i in s[start_idx:]:
12            if i.isdigit():
13                result = result * 10 + (ord(i) - ord('0'))
14            else:
15                break
16        if not result:
17            result = 0
18        result=int(result)
19        if s[0]=="-":
20            result*=-1
21        INT_MIN, INT_MAX = -2**31, 2**31 - 1
22        if result < INT_MIN:
23            return INT_MIN
24        if result > INT_MAX:
25            return INT_MAX
26        return result