# Last updated: 7/16/2026, 4:39:48 PM
class Solution(object):
    def twoSum(self, num, target):
        for i in range(len(num)):
            for j in range(i+1,len(num)):
                if num[i]+num[j] == target:
                     return [i,j]

solution = Solution()
num =[1,2,4,7,8,3]
target = 9
print(solution.twoSum(num,target))