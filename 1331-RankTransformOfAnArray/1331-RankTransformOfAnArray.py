# Last updated: 9/6/2026, 12:31:26 PM
class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        rank_map = {}
        rank = 1

        for num in sorted(arr):
            if num not in rank_map:
                rank_map[num] = rank
                rank += 1
        return [rank_map[num] for num in arr]
        
        '''n = int(input.strip())
        arr = list(map(int, input.split()))
        result = rankofint(arr)
        return (result)'''