# Last updated: 9/6/2026, 12:32:35 PM
class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        cur_sum = 0
        ans = 0
        prefi = {0 : 1}

        for n in nums:
            cur_sum += n
            diff = cur_sum - k
            ans += prefi.get(diff, 0)
            prefi[cur_sum] = 1 + prefi.get(cur_sum, 0)
        return ans
        '''for i in range(len(nums)):
            cur_sum = 0
            for j in range(i, len(nums)):
                cur_sum += nums[j]
                if cur_sum == k:
                    count += 1
        return count''' 
