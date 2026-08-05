# Last updated: 8/5/2026, 11:47:24 PM
1from collections import Counter
2class Solution:
3    def leastInterval(self, tasks: List[str], n: int) -> int:
4        c=list(Counter(tasks).values())
5        m=max(c)
6        c=c.count(m)
7        return(max((n*(m-1)+m)+(c-1),len(tasks)))