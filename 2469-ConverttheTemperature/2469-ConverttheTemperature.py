# Last updated: 11/13/2026, 9:25:59 PM
1class Solution:
2    def convertTemperature(self, celsius: float) -> list[float]:
3        return [celsius + 273.15, celsius * 1.80 + 32.00]