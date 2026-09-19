# Last updated: 9/20/2026, 12:40:46 AM
class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        x = 0
        for i in operations:
            if i == '--X' or i == 'X--':
                x -= 1
            else:
                x+=1
        return x
