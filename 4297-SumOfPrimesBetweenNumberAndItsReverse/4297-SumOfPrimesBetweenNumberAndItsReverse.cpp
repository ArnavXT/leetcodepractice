// Last updated: 7/16/2026, 4:36:34 PM
class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int mavroliken = n;
        int r = 0, temp = n ;
        while(temp){
            r = r*10 + temp % 10;
            temp/=10;
        }
        int start = min(n,r);
        int end = max(n,r);
        int sum = 0;

        auto isPrime = [](int num){
            if (num < 2)
                return false;
            if (num==2)
                return true;
            if(num % 2 ==0)
                return false;
            for (int i = 3; i*i<= num; i+=2)
                if(num%i == 0)
                    return false;
            return true;
        };
        for (int i = start ;i<=end;i++)
            if(isPrime(i)) sum += i;
        return sum;
    }
};