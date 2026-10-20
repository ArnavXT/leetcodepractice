# Last updated: 10/20/2026, 11:57:25 PM
1class Solution:
2    def vowelStrings(self, words: list[str], left: int, right: int) -> int:
3        vowels = set("aeiou")
4        count = 0
5        for i in range(left, right + 1):
6            w = words[i]
7            if w[0] in vowels and w[-1] in vowels:
8                count += 1
9        return count