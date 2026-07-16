# Last updated: 7/16/2026, 4:37:32 PM
class Solution(object):
    def arrayRankTransform(self, arr):
        unique_elements = sorted(set(arr))
        
        rank_mapping = {num: rank + 1 for rank, num in enumerate(unique_elements)}
        
        return [rank_mapping[num] for num in arr]