// Last updated: 7/25/2026, 10:36:10 AM
1class Solution {
2public:
3    int maxProduct(int n) {
4        int large = 0;
5        int secondL = 0;
6
7        while(n > 0){
8            int curr = n % 10;
9
10            if (curr > large){
11                secondL = large;
12                large = curr;
13            } else if (curr > secondL){
14                secondL = curr;
15            }
16            n /= 10;
17        }
18        return large * secondL;
19    }
20};