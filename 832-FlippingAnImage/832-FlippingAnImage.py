# Last updated: 11/5/2026, 8:21:46 PM
class Solution:
    def flipAndInvertImage(self, image: list[list[int]]) -> list[list[int]]:
        for i in range(len(image)):
            image[i] = image[i][::-1]
            image[i] = [1 if x == 0 else 0 for x in image[i]]
        return image