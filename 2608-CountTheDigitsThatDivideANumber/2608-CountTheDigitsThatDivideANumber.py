# Last updated: 8/26/2026, 10:00:07 AM
class Solution:
    def countDigits(self, num: int) -> int:
        count = 0
        original_num = num

        while(num>0):
            digit = num % 10
            
            if original_num % digit == 0:
                count += 1

            num = num // 10

        return count