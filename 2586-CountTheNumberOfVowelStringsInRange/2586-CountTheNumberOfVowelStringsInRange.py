# Last updated: 10/19/2026, 11:23:48 AM
class Solution:
    def vowelStrings(self, words: list[str], left: int, right: int) -> int:
        words=words[left:right+1]
        count=0
        for i in words:
            if i[0] in ["a","e","i","o","u"] and i[-1] in ["a","e","i","o","u"]:
                count+=1
        return count