# Last updated: 11/12/2026, 8:30:37 PM
class Solution:
    def separateDigits(self, nums: list[int]) -> list[int]:
        ans=[]
        for i in nums:
            for j in str(i):
                ans.append(int(j))

        return ans