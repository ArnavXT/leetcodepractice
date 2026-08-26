# Last updated: 8/26/2026, 10:04:05 AM
class Solution:
    def isValid(self, s: str) -> bool:
        l = ['z']

        for i in s:
            if i == '(' or i == '{'  or i == '[':
                l.append(i)
            elif i == ')':
                if l[-1] == '(':
                    l.pop()
                else: 
                    return False
            elif i == ']':
                if l[-1] == '[':
                    l.pop()
                else: 
                    return False

            elif i == '}':
                if l[-1] == '{':
                    l.pop()
                else: 
                    return False

        if len(l) == 1:
            return True
        return False

        