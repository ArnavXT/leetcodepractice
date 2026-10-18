# Last updated: 10/19/2026, 1:17:39 AM
1class Solution:
2    def letterCombinations(self, digits: str) -> List[str]:
3        if not digits:
4            return []
5        
6        phone = {"2": "abc", "3": "def", "4": "ghi", "5": "jkl", "6": "mno", "7": "pqrs", "8": "tuv", "9": "wxyz"}
7        res = []
8        
9        def back(comb, next_dig):
10            if not next_dig:
11                res.append(comb)
12                return
13            
14            for letter in phone[next_dig[0]]:
15                back(comb + letter, next_dig[1:])
16        
17        back("", digits)
18        return res