# Last updated: 9/6/2026, 12:33:26 PM
1class Solution:
2    def removeCoveredIntervals(self, intervals: List[List[int]]) -> int:
3
4        intervals.sort(key=lambda x: (x[0], -x[1]))
5
6        ans = len(intervals)
7
8        low = intervals[0][0]
9        high = intervals[0][1]
10
11        for i in range(1, len(intervals)):
12
13            if intervals[i][0] == low or intervals[i][1] <= high:
14                ans -= 1
15            else:
16                low = intervals[i][0]
17                high = intervals[i][1]
18
19        return ans