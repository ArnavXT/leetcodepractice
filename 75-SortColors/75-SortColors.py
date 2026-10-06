# Last updated: 10/6/2026, 2:16:28 PM
class Solution:
    def sortColors(self, nums: list[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        R = W = B = 0
        for num in nums:
            if num==0:
                R+=1
            elif num == 1:
                W+=1
            else:
                B+= 1

        idx = 0
        for i in range(R):
            nums[idx] = 0
            idx+= 1
        for i in range(R, R+W):
            nums[idx] = 1
            idx += 1
        for i in range(R+W, R+W+B):
            nums[idx] = 2
            idx += 1
