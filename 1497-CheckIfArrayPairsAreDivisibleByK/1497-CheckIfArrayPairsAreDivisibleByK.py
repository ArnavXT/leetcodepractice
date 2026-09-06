# Last updated: 9/6/2026, 12:30:58 PM
class Solution(object):
    def canArrange(self, arr, k):
        """
        :type arr: List[int]
        :type k: int
        :rtype: bool
        """
        rem_count = [0] * k
        
        for num in arr:
            remainder = num % k

            if remainder < 0:
                remainder += k
            rem_count[remainder] += 1

        if rem_count[0] % 2 != 0:
            return False

        for i in range(1, k):
            if rem_count[i] != rem_count[k - i]:
                return False
        return True

