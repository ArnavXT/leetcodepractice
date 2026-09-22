# Last updated: 9/23/2026, 12:49:16 AM
1class Solution:
2    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
3        intervals.sort()  # Sort by start time
4        merged = []
5        prev = intervals[0]
6
7        for i in range(1, len(intervals)):
8            if intervals[i][0] <= prev[1]:  
9                prev[1] = max(prev[1], intervals[i][1])  
10            else:
11                merged.append(prev)
12                prev = intervals[i]
13
14        merged.append(prev)
15        return merged