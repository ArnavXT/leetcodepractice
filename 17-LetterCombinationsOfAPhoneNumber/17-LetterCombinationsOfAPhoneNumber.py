# Last updated: 11/5/2026, 8:24:09 PM
class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if not digits:
            return []
        
        phone = {"2": "abc", "3": "def", "4": "ghi", "5": "jkl", "6": "mno", "7": "pqrs", "8": "tuv", "9": "wxyz"}
        res = []
        
        def back(comb, next_dig):
            if not next_dig:
                res.append(comb)
                return
            
            for letter in phone[next_dig[0]]:
                back(comb + letter, next_dig[1:])
        
        back("", digits)
        return res