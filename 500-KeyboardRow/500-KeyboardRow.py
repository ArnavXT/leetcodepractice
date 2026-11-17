# Last updated: 11/17/2026, 8:47:59 PM
class Solution:
    def findWords(self, words: list[str]) -> list[str]:
        a = set("qwertyuiop")
        b = set ("asdfghjkl")
        c = set("zxcvbnm")
        ans = []
        for word in words:
            word_set = set(word.lower())
            if word_set.issubset(a) or word_set.issubset(b) or word_set.issubset(c):
                ans.append(word)
        return ans
