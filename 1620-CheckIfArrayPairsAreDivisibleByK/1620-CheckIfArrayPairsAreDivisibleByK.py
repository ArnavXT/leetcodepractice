# Last updated: 7/16/2026, 4:37:17 PM
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

