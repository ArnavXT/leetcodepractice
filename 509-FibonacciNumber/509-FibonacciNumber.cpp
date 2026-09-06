// Last updated: 9/6/2026, 12:31:53 PM
class Solution {
public:
    int fib(int n) {
       if(n==0) return 0;
       if(n==1) return 1;
       return fib(n-1)+fib(n-2); 
    }
};