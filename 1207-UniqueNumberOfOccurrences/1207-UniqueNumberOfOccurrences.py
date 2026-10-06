# Last updated: 10/6/2026, 2:14:40 PM
class Solution:
    def uniqueOccurrences(self, arr: list[int]) -> bool:
        c = Counter(arr)
        for i in arr:
            return len(c.values()) == len(set(c.values()))
