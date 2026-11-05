# Last updated: 11/5/2026, 8:20:18 PM
class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        ans=[]
        for i in range(len(words)):
            if x in words[i]:
                ans.append(i)
        return ans