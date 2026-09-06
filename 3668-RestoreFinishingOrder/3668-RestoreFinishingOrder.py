# Last updated: 9/6/2026, 12:29:04 PM
class Solution:
    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        ans = []
        for i in order:
            if i in friends:
                ans.append(i)
        return ans