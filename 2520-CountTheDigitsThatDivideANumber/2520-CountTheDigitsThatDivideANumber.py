# Last updated: 9/6/2026, 12:30:17 PM
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