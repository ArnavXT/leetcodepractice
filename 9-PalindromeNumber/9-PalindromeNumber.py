# Last updated: 8/26/2026, 10:04:20 AM
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False

        num = x
        result = 0
        while(num>0):
            id = (num%10)
            result = (result * 10) + id
            num = num // 10

        return result == x