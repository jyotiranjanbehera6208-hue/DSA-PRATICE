class Solution {
public:
    long long MOD = 1000000007;
long long power(long long x, long long n) {
    
        if(n == 0)
            return 1;

        long long half = power(x, n / 2);

        if(n % 2 == 0)
            return( half * half)%MOD;
        else
            return (x * half % MOD * half)%MOD;
    }
    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd =n/2;
        long long a=power(5,even);
        long long b=power(4,odd);
        long long ans = (a * b) %MOD;
        return ans;
    }
};