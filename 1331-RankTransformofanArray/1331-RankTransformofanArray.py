# Last updated: 8/8/2026, 2:35:26 PM
1class Solution:
2    def arrayRankTransform(self, arr: List[int]) -> List[int]:
3        rank_map = {}
4        rank = 1
5
6        for num in sorted(arr):
7            if num not in rank_map:
8                rank_map[num] = rank
9                rank += 1
10        return [rank_map[num] for num in arr]
11        
12        '''n = int(input.strip())
13        arr = list(map(int, input.split()))
14        result = rankofint(arr)
15        return (result)'''