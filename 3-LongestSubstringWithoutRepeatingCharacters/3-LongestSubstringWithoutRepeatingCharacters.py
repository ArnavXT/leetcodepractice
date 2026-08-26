# Last updated: 8/26/2026, 9:21:00 AM
1class Solution:
2    def lengthOfLongestSubstring(self, s: str) -> int:
3        l = [] 
4        longest = 0
5        for i in s:
6            if i in l:
7                l= l[l.index(i) + 1:]
8                l.append(i)
9            else:
10                l.append(i)
11            longest = max(len(l),longest)
12        return (longest)