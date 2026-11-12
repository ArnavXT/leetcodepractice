# Last updated: 11/12/2026, 8:31:04 PM
class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        ans=len(words)
        allowed=[x for x in allowed]
        for i in words:
            for j in i:
                if j not in allowed:
                    ans-=1
                    break
        return ans  