# Last updated: 10/6/2026, 2:09:19 PM
1class Solution:
2    def uniqueOccurrences(self, arr: list[int]) -> bool:
3        c = Counter(arr)
4        for i in arr:
5            return len(c.values()) == len(set(c.values()))
6