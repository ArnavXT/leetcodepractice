# Last updated: 10/31/2026, 10:45:11 PM
1class Solution:
2    def flipAndInvertImage(self, image: list[list[int]]) -> list[list[int]]:
3        for i in range(len(image)):
4            image[i] = image[i][::-1]
5            image[i] = [1 if x == 0 else 0 for x in image[i]]
6        return image