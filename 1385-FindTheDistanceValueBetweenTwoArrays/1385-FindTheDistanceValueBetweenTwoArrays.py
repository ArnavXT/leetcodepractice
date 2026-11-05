# Last updated: 11/5/2026, 8:21:12 PM
class Solution:
    def findTheDistanceValue(self, arr1: list[int], arr2: list[int], d: int) -> int:
        c = 0
        for x in arr1:
            Flag = True
            for y in arr2:
               if abs(x-y) <= d:
                    Flag = False
                    break
            if Flag:
                c+=1
        return c
