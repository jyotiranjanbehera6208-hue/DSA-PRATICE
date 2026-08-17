class Solution {
public:
    double myPow(double x, int n) {

        long long N = n;        // CHANGE 1

        if(N < 0) {             // CHANGE 2
            x = 1 / x;          // CHANGE 3
            N = -N;             // CHANGE 4
        }

        if(N == 0)
            return 1;

        double half = myPow(x, N / 2);

        if(N % 2 == 0)
            return half * half;
        else
            return x * half * half;
    }
};