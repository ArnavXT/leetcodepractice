# Last updated: 11/5/2026, 8:20:29 PM
class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        answer = [0] * len(nums)
        leftSum = 0
        rightSum = sum(nums)
        for i in range(len(nums)):
            rightSum -= nums[i]
            answer[i] = abs(leftSum - rightSum)
            leftSum += nums[i]
            #answer[i] = leftSum[i] - rightSum[i]:
            #answer += i
        return answer
            