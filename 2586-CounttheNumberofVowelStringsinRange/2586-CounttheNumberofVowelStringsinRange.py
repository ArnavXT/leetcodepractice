# Last updated: 10/19/2026, 11:19:45 AM
1class Solution:
2    def vowelStrings(self, words: list[str], left: int, right: int) -> int:
3        words=words[left:right+1]
4        count=0
5        for i in words:
6            if i[0] in ["a","e","i","o","u"] and i[-1] in ["a","e","i","o","u"]:
7                count+=1
8        return count