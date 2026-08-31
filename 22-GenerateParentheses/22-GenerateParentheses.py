# Last updated: 8/31/2026, 12:50:21 PM
1class Solution:
2    def generateParenthesis(self, n: int) -> List[str]:
3        ans = []
4        subset = [' '] * 2 * n
5        def backtrack(sum_val, ind):
6            if ind == 2 * n:
7                if sum_val == 0:
8                    ans.append("".join(subset))
9                return
10            if sum_val < n:
11                subset[ind] = '('
12                backtrack(sum_val+1, ind + 1)
13            if sum_val > 0:
14                subset[ind] = ')'
15                backtrack(sum_val-1, ind+1)
16        backtrack(0,0)
17        return ans
18