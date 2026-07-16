# Last updated: 7/16/2026, 4:38:19 PM
class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        j = 0
        for i in range(len(nums)):
            if nums[i] != 0:
                nums[i],nums[j]=nums[j],nums[i] #swapping 
                j +=1 #moving j to the next index
        